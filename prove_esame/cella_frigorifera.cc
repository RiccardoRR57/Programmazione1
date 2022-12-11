#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int LUNGH_MAX_NOME = 32;
const int MAX_SCATOLE_CELLA = 256;

struct scatola_t
{
	char nome[LUNGH_MAX_NOME];
	double peso;
	int temp_min, temp_max;
};

struct cella_t
{
	scatola_t elenco_scatole[MAX_SCATOLE_CELLA];
	int num_scatole = 0;
};

bool inserisci(scatola_t scatola, cella_t &destinazione)
{

	if (destinazione.num_scatole >= MAX_SCATOLE_CELLA)
	{
		return false;
	}

	int i;
	for (i = 0; i < destinazione.num_scatole; i++)
	{
		if (strcmp(destinazione.elenco_scatole[i].nome, scatola.nome) > 0)
		{
			break;
		}
	}

	for (int j = destinazione.num_scatole; j > i; j--)
	{
		destinazione.elenco_scatole[j] = destinazione.elenco_scatole[j - 1];
	}

	destinazione.elenco_scatole[i] = scatola;
	destinazione.num_scatole++;

	// destinazione.elenco_scatole[destinazione.num_scatole] = scatola;

	return true;
}

void stampa_contenuto(const cella_t &cella)
{

	for (int i = 0; i < cella.num_scatole; i++)
	{
		cout << "{" << cella.elenco_scatole[i].nome << ", "
			 << cella.elenco_scatole[i].peso << ", ["
			 << cella.elenco_scatole[i].temp_min << ", "
			 << cella.elenco_scatole[i].temp_max << "]}";

		if (i < cella.num_scatole && strcmp(cella.elenco_scatole[i].nome, cella.elenco_scatole[i + 1].nome) == 0)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
	}
}

bool salva_contenuto(const cella_t &cella)
{

	ofstream file_out_cella("Cella.txt");
	if (!file_out_cella)
		return false;

	file_out_cella << cella.num_scatole << endl;

	for (int i = 0; i < cella.num_scatole; i++)
	{
		file_out_cella << cella.elenco_scatole[i].nome << ' ' << cella.elenco_scatole[i].peso << ' ' << cella.elenco_scatole[i].temp_min << ' ' << cella.elenco_scatole[i].temp_max << endl;
	}

	return true;
}

bool carica_contenuto(cella_t &cella)
{

	ifstream file_in_cella("Cella.txt");
	if (!file_in_cella)
		return false;

	int num_scatole;
	file_in_cella >> num_scatole;

	scatola_t scatola;

	for (int i = 0; i < num_scatole; i++)
	{

		file_in_cella >> scatola.nome >>
			scatola.peso >>
			scatola.temp_min >>
			scatola.temp_max;
		inserisci(scatola, cella);
	}
	return true;
}

int temp_min(const cella_t &cella)
{

	int min = INT32_MIN;
	for (int i = 0; i < cella.num_scatole; i++)
	{
		if (cella.elenco_scatole[i].temp_min > min)
			min = cella.elenco_scatole[i].temp_min;
	}
	return min;
}

int temp_max(const cella_t &cella)
{

	int max = INT32_MAX;
	for (int i = 0; i < cella.num_scatole; i++)
	{
		if (cella.elenco_scatole[i].temp_max < max)
			max = cella.elenco_scatole[i].temp_max;
	}
	return max;
}

void elimina_intervallo(cella_t &cella, int min, int max)
{
	for (int i = 0; i < cella.num_scatole; i++)
	{
		if (cella.elenco_scatole[i].temp_min >= min && cella.elenco_scatole[i].temp_max <= max)
		{
			cella.num_scatole--;
			for (int j = i; j < cella.num_scatole; j++)
			{
				cella.elenco_scatole[j] = cella.elenco_scatole[j + 1];
			}
		}
	}
}

int main()
{
	const char menu[] =
		"1. Inserimento scatola\n"
		"2. Stampa contenuto cella\n"
		"3. Salvataggio\n"
		"4. Caricamento\n"
		"5. Stampa temperatura minima e massima compatibili\n"
		"6. Estrazione scatole\n"
		"7. Uscita\n";

	cella_t cella1;
	int min, max;

	while (true)
	{
		cout << endl
			 << menu << endl;
		int scelta;
		cin >> scelta;

		switch (scelta)
		{
		case 1:
			scatola_t da_inserire;
			cout << "Nome prodotto: ";
			cin >> da_inserire.nome;
			cout << "Peso prodotto: ";
			cin >> da_inserire.peso;
			cout << "Temperatura minima di conservazione: ";
			cin >> da_inserire.temp_min;
			cout << "Temperatura massima di conservazione: ";
			do
			{
				cin >> da_inserire.temp_max;
			} while (da_inserire.temp_max < da_inserire.temp_min);

			if (!inserisci(da_inserire, cella1))
			{
				cout << "Scatola non inserita, la cella è piena!" << endl;
			};

			break;

		case 2:
			stampa_contenuto(cella1);
			break;

		case 3:
			salva_contenuto(cella1);
			break;

		case 4:
			carica_contenuto(cella1);
			break;

		case 5:
			min = temp_min(cella1);
			max = temp_max(cella1);
			if (min <= max)
			{
				cout << "La temperatura deve essere compresa tra " << min << " e " << max << " gradi" << endl;
			}
			else
			{
				cout << "Non esiste una temperatura compatibile nella cella" << endl;
			}
			break;
		case 6:
			elimina_intervallo(cella1, -60, 50);
			break;
		case 7:
			return 0;
		default:
			cout << "Scelta errata" << endl;
			break;
		}
	}
	return 1;
}
