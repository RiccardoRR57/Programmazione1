#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int MAX = 20;

    int n = 0, somma = 0, max = 0, numero_inserito = 0;;
    do {
        cin >> n;
    } while(n < 0 || n > MAX);

    int i = 0;
    while(i < n) {
        cin >> numero_inserito;

        if(numero_inserito == 0)
            break;
        
        if(numero_inserito < 0) {
            continue;
        }

        somma += numero_inserito;

        if(numero_inserito > max) 
            max = numero_inserito;
        
        i++;
    }
    
    /*
    for (int i = 0; i < n; i++) {
        cin >> numero_inserito;
        if(numero_inserito == 0)
            break;
        if(numero_inserito < 0) {
            i--;
            continue;
        }
        somma += numero_inserito;
        if(numero_inserito > max) 
            max = numero_inserito;
    }
    */

    cout << "Max: " << max << endl << "Somma: " << somma << endl;

    return 0;
}
