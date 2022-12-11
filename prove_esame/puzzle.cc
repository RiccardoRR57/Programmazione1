#include <iostream>
#include <fstream>

using namespace std;

struct puzzle_t
{
	char *mat_puzzle = new char[0];
	int lungh_riga = 0;
};

void inizializza_puzzle(puzzle_t &puzzle, int N, istream &input)
{
	puzzle.lungh_riga = N;
	puzzle.mat_puzzle = new char[N * N];
	char temp;

	for (int i = 0; i < N * N; i++)
	{
		input >> temp;
		if (temp < 'A' || temp > 'Z')
			temp = 'A';
		puzzle.mat_puzzle[i] = temp;
	}
}

void stampa_puzzle(const puzzle_t &puzzle, ostream &output)
{

	for (int i = 0; i < puzzle.lungh_riga * puzzle.lungh_riga; i++)
	{
		output << puzzle.mat_puzzle[i] << ' ';
		if ((i + 1) % puzzle.lungh_riga == 0)
		{
			output << endl;
		}
	}
}

bool salva_puzzle(const puzzle_t &puzzle)
{
	ofstream file_puzzle("Puzzle.txt");
	if (!file_puzzle)
		return false;

	file_puzzle << puzzle.lungh_riga << endl;
	stampa_puzzle(puzzle, file_puzzle);

	return true;
}

bool carica_puzzle(puzzle_t &puzzle)
{
	ifstream file_puzzle("Puzzle.txt");
	if (!file_puzzle)
		return false;

	file_puzzle >> puzzle.lungh_riga;
	inizializza_puzzle(puzzle, puzzle.lungh_riga, file_puzzle);

	return true;
}

bool cerca_parola_verticale(const puzzle_t &puzzle, char parola[])
{
	if (parola[0] == '\0')
		return false;
	int lungh_parola;
	for (lungh_parola = 0; parola[lungh_parola] != '\0'; lungh_parola++)
		;
	for (int i = lungh_parola; i <= puzzle.lungh_riga; i++)
	{
		cout << "una iterazione" << endl;
		for(int j = 0; j < lungh_parola; j++) {
			if(parola[j] == puzzle.mat_puzzle[])
		}
		return true;
	}

	return false;
}

int main()
{
	const char menu[] =
		"1. Reinizializza puzzle\n"
		"2. Stampa puzzle\n"
		"3. Salva puzzle\n"
		"4. Carica puzzle\n"
		"5. Trova parola in verticale\n"
		"6. Trova parola globalmente\n"
		"7. Esci\n";

	puzzle_t puzzle;
	int dim;
	char parola[16];

	while (true)
	{
		cout << menu << endl;
		int scelta;
		cin >> scelta;

		cout << endl; // per il corretto funzionamento del tester

		switch (scelta)
		{
		case 1:
			cout << "Quante righe e colonne ha il puzzle?" << endl;
			cin >> dim;
			inizializza_puzzle(puzzle, dim, cin);
			cout << endl;
			break;

		case 2:
			stampa_puzzle(puzzle, cout);
			cout << endl;
			break;
		case 3:
			if (!salva_puzzle(puzzle))
			{
				cout << "Errore in scrittura file" << endl;
			}
			break;
		case 4:
			if (!carica_puzzle(puzzle))
			{
				cout << "Errore in apertura file" << endl;
			}
			break;
		case 5:
			cout << "Inserisci parola da cercare" << endl;
			cin >> parola;
			if (cerca_parola_verticale(puzzle, parola))
				cout << "PRESENTE" << endl;
			else
				cout << "ASSENTE" << endl;
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
