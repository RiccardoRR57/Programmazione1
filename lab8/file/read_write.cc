#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    char c;

    ofstream f("Testo.txt");
    if (!f)
    {
        cout << "Errore in creazione file" << endl;
    }

    cin >> noskipws;
    while (cin >> c)
    {
        f << c;
    }
    f.close();

    ifstream input("Testo.txt");
    if (!input)
    {
        cout << "Errore in apertura file" << endl;
    }

    input >> noskipws;

    while (input >> c)
    {
        cout << c;
    }
}
