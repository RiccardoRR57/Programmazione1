#include <iostream>
#include <stdlib.h>

using namespace std;

const int ALPHABET_N = 26;

struct contenitore
{
	int quantita[ALPHABET_N];
	int cap, numElem;
};

contenitore Inizializza(int N)
{
	contenitore cont;

	cont.numElem = 0;
	cont.cap = N;
	for (int i = 0; i < ALPHABET_N; i++)
	{
		cont.quantita[i] = 0;
	}

	// Controllo che la capienza sia positiva
	if (N <= 0)
	{
		cout << "La capienza deve esser strettamente positiva" << endl;
		cont.cap = -1;
	}

	return cont;
}

contenitore Inserisci(char p, contenitore cont)
{

	// Controllo che il contenitore non sia pieno
	if (cont.cap == cont.numElem)
	{
		cout << "Il contenitore è già pieno" << endl;
		return cont;
	}

	// Controllo, solo lettere minuscole ammesse nel contenitore
	if (p < 'a' || p > 'z')
	{
		cout << "Si possono inserire solo lettere minuscole" << endl;
		return cont;
	}

	int index = p - 'a';
	cont.quantita[index]++;
	cont.numElem++;

	return cont;
}

contenitore Estrai(char p, contenitore cont)
{

	// Controllo, solo lettere minuscole ammesse nel contenitore.
	if (p < 'a' || p > 'z')
	{
		cout << "Si possono estrarre solo lettere minuscole" << endl;
		return cont;
	}

	int index = p - 'a';
	cont.numElem -= cont.quantita[index];
	cont.quantita[index] = 0;

	return cont;
}

contenitore Modifica(int N, contenitore cont)
{

	// Controllo che tutti gli elementi ci stiano
	if (N < cont.numElem)
	{
		cout << "Nuova capienza troppo piccola affinche ci stiano tutti gli elementi" << endl;
		return cont;
	}

	cont.cap = N;
	return cont;
}

int capienza(contenitore cont)
{
	return cont.cap;
}

int quanti(contenitore cont)
{
	return cont.numElem;
}

void stampa(contenitore cont)
{
	int elementi_stampati = 0;

	char lettera = 'a';
	cout << "<";
	for (int i = 0; i < ALPHABET_N; i++)
	{
		if (cont.quantita[i] != 0)
		{
			cout << static_cast<char>('a' + i) << ":" << cont.quantita[i];
			elementi_stampati += cont.quantita[i];

			if (elementi_stampati < cont.numElem)
			{
				cout << ", ";
			}
		}
	}
	cout << ">" << endl;
}

int main()
{
	contenitore contenitore1;
	contenitore1.cap = -1;

	const char Menu[] =
		"\nComandi disponibili:\n"
		"\ti - per inserire un elemento nel contenitore\n"
		"\te - per estrarre elementi dal contenitore\n"
		"\tc - per modificare la capienza del contenitore\n"
		"\tf - per informazioni sul contenitore\n"
		"\tt - per terminare\n";

	cout << "Inizializzazione contenitore.\n";
	while (contenitore1.cap == -1)
	{
		cout << "Immetterne la capienza (e premere Invio): ";
		int n;
		cin >> n;
		contenitore1 = Inizializza(n);
	}
	cout << endl;
	while (true)
	{
		char comando;

		stampa(contenitore1);
		cout << Menu << "\n\nImmettere comando e premere Invio: ";
		cin >> comando; // 'consumiamo' il precedente newline
		switch (comando)
		{
		case 'i':
		{
			char p;
			cout << "Inserisci nome elemento ";
			cin >> p;
			contenitore1 = Inserisci(p, contenitore1);
			break;
		}
		case 'e':
		{
			char p;
			cout << "Inserisci nome elemento ";
			cin >> p;
			contenitore1 = Estrai(p, contenitore1);
			break;
		}
		case 'c':
		{
			int i;
			cout << "Inserisci nuova capienza (e premi Invio): ";
			cin >> i;
			contenitore1 = Modifica(i, contenitore1);
			break;
		}
		case 'f':
			cout << "Capienza: " << capienza(contenitore1) << "\tElementi: "
				 << quanti(contenitore1) << endl;
			break;
		case 't':
			return 0;
		default:
			cout << "Comando non valido\n";
		}
	}
	return 0;
}
