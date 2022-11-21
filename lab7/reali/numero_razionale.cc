#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int mcd(int a, int b) {
    int i;
    for(i = a + b; a%i != 0 || b%i != 0; i--);
    return i;
}

int main()
{
    int numeratore, denominatore = 1;
    float numero;
    cout << "Immettere un razionale" << endl;
    cin >> numero;
    int i =0;
    for (i; (floor(numero) != numero); i++)
    {
        numero *= 10;
        denominatore *= 10;
    }
    numeratore = numero;

    int maxcomdiv = mcd(numeratore, denominatore);
    numeratore /= maxcomdiv;
    denominatore /= maxcomdiv;

    cout << numeratore << " / " << denominatore << endl;
    
    return 0;
}

