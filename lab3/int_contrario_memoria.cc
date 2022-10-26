#include <iostream>

using namespace std;

int main() {
    int numero = 0;

    cout << "Inserisci un intero positivo: ";

    cin >> numero;

    int numero2 = 0;

    numero2 += (numero % 10) * 100;
    numero2 += ((numero % 100) / 10) * 10;
    numero2 += (numero / 100);

    cout << numero2 << endl;

    return 0;
}
