#include <iostream>

using namespace std;

const int LUNGH_MAX_NOME = 32;
const int MAX_SCATOLE_CELLA = 256;

struct scatola
{
	char nome[LUNGH_MAX_NOME];
	double peso;
	int temp_min, temp_max;
};

struct cella {
	scatola elenco_scatole[MAX_SCATOLE_CELLA];
	int num_scatole = 0;
};

cella inserisci(scatola da_inserire, cella destinazione) {
	cout << destinazione.num_scatole<<endl;
	destinazione.elenco_scatole[destinazione.num_scatole] = da_inserire;
	destinazione.num_scatole++;
	return destinazione;
}

void stampa_contenuto(cella c) {
	
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

	cella cella1;

	while (true)
	{
		cout << endl
			 << menu << endl;
		int scelta;
		cin >> scelta;

		switch (scelta)
		{
		case 1:
			scatola da_inserire;
			cout << "Nome prodotto: ";
			cin >> da_inserire.nome;
			cout << "Peso prodotto: ";
			cin >> da_inserire.peso;
			cout << "Temperatura minima di conservazione: ";
			cin >> da_inserire.temp_min;
			cout << "Temperatura massima di conservazione: ";
			cin >> da_inserire.temp_max;
			cella1 = inserisci(da_inserire, cella1);
			break;

		case 2:
			stampa_contenuto(cella1);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			return 0;
		default:
			cout << "Scelta errata" << endl;
		}
	}
	return 1;
}
