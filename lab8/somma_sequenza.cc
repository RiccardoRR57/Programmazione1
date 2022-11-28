#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, somma = 0;
    cout << "Somma valori inseriti: " << somma << endl;
    while(cin)
    {
        cout << "Inserisci un numero (Ctrl-D per terminare la lettura)" << endl;
        cin >> a;
        somma += a;
    }
    somma -= a;
    cout << somma << endl;

    return 0;
}
