#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    char c;
    int conta_righe = 0;

    ofstream f("Testo.txt");
    if (!f)
    {
        cout << "Errore in creazione file" << endl;
        return 1;
    }

    while (cin.get(c))
    {
        
        f << c;
    }
    f.close();

    ifstream input("Testo.txt");
    if (!input)
    {
        cout << "Errore in apertura file" << endl;
        return 1;
    }

    while (input.get(c))
    {
        if(c == '\n') conta_righe++;
        cout << c;
    }

    cout << conta_righe << " righe" << endl;
}
