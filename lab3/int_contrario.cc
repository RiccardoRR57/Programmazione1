#include <iostream>

using namespace std;

int main() {
    int numero = 0;

    cout << "Inserisci un intero positivo: ";

    cin >> numero;

    cout << numero % 10 << (numero % 100) / 10 << (numero % 1000) / 100 << endl;

    return 0;
}
