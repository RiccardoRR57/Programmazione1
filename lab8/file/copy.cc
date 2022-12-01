#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file_origine("Testo.txt");
    if(!file_origine) cout << "Errore in apertura file\n";

    ofstream file_destinazione("Testo-copia.txt");
    if(!file_destinazione) cout << "Errore in creazione file\n";

    char c;

    file_origine >> noskipws;
    while(file_origine >> c) {
        file_destinazione << c;
    }

    return 0;
}
