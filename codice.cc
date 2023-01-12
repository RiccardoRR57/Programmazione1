#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char *FILE_NAME = "codice.bin";

char **codice;
int M, N;

void inizializza_codice(int M, int N)
{
    int i, j;
    char c;

    // Alloca lo spazio per il codice
    codice = new char *[N];
    for (i = 0; i < N; i++)
    {
        codice[i] = new char[M];
    }

    // Legge il contenuto del codice da stdin
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> c;
            codice[i][j] = c;
        }
    }
}

void stampa_codice()
{
    int i, j;

    // Stampa il codice su una sola linea, separando le righe con il carattere '|'
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << codice[i][j];
        }
        cout << "|";
    }
    cout << endl;
}

void salva_codice()
{
    int i;
    ofstream file;

    // Apre il file in modalità di scrittura binaria
    file.open(FILE_NAME, ios::binary);
    if (!file.is_open())
    {
        cerr << "Errore durante l'apertura del file" << endl;
        exit(1);
    }

    // Scrive le dimensioni del codice (M e N) nel file
    file.write(reinterpret_cast<char *>(&M), sizeof(int));
    file.write(reinterpret_cast<char *>(&N), sizeof(int));

    // Scrive il contenuto del codice nel file
    for (i = 0; i < N; i++)
    {
        file.write(codice[i], sizeof(char) * M);
    }

    // Chiude il file
    file.close();
}

void carica_codice()
{
    int i;
    ifstream file;

    // Apre il file in modalità di lettura binaria
    file.open(FILE_NAME, ios::binary);
    if (!file.is_open())
    {
        cerr << "Errore durante l'apertura del file" << endl;
        exit(1);
    }

    // Legge le dimensioni del codice (M e N) dal file
    file.read(reinterpret_cast<char *>(&M), sizeof(int));
    file.read(reinterpret_cast<char *>(&N), sizeof(int));

    // Alloca lo spazio per il codice
    codice = new char *[N];
    for (i = 0; i < N; i++)
    {
        codice[i] = new char[M];
    }

    // Legge il contenuto del codice dal file
    for (i = 0; i < N; i++)
    {
        file.read(codice[i], sizeof(char) * M);
    }

    // Chiude il file
    file.close();
}

char ritorna_carattere(int i, int j)
{
    // Controlla che i e j siano entro i limiti del codice
    if (i < 0 || i >= N || j < 0 || j >= M)
    {
        cout << "FALLITO" << endl;
        exit(1);
    }

    // Ritorna il carattere nella posizione i-esima della riga j-esima
    return codice[i][j];
}

void ruota_codice()
{
    int i, j;
    char **nuovo_codice;

    // Alloca lo spazio per il nuovo codice
    nuovo_codice = new char *[M];
    for (i = 0; i < M; i++)
    {
        nuovo_codice[i] = new char[N];
    }

    // Trasforma il codice corrente in un codice da M righe ed N caratteri
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            nuovo_codice[i][j] = codice[j][i];
        }
    }

    // Sostituisce il codice corrente con il nuovo codice
    for (i = 0; i < N; i++)
    {
        delete[] codice[i];
    }
    delete[] codice;
    codice = nuovo_codice;
    swap(M, N);
}

/*
int main()
{
    // Inizializza il codice
    inizializza_codice(M, N);

    // Stampa il codice
    stampa_codice();

    // Salva il codice in un file
    salva_codice();

    // Carica il codice da un file
    carica_codice();

    // Stampa il codice
    stampa_codice();

    // Ritorna il carattere nella posizione i-esima della riga j-esima
    cout << ritorna_carattere(1, 2) << endl;

    // Ruota il codice
    ruota_codice();

    // Stampa il codice
    stampa_codice();

    return 0;
}
*/

int main()
{
    const char menu[] =
        "1. Inizializza codice\n"
        "2. Stampa codice\n"
        "3. Salva codice\n"
        "4. Carica codice\n"
        "5. Stampa carattere\n"
        "6. Ruota codice\n"
        "7. Esci\n";

    while (true)
    {
        cout << menu << endl;
        int scelta;
        cin >> scelta;

        cout << endl; // per il corretto funzionamento del tester

        switch (scelta)
        {
        case 1:
            break;
        case 2:
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
