#include <iostream>

using namespace std;

int main()
{
    // system("ls");
    // cout << "Ho finito" << endl;
    int n;

    cout << "Somma dei primi n interi" << endl << "Inserisci un numero intero" << endl; 

    cin >> n;

    int risultato = 0;

    for (int i = 0; i <= n; i++) {
        risultato += i;
    }
/*
    while(i <= n) {
        risultato += i;
        i++;
    }
*/

    cout << risultato << endl;

    return 0;
}
