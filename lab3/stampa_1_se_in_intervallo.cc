#include <iostream>

using namespace std;

int main() {
    int a, b, x;

    cout << "Inserisci il valore di a: ";
    cin >> a;

    cout << "Inserisci il valore di b: ";
    cin >> b;

    cout << "Inserisci il valore di x: ";
    cin >> x;
    
    cout << "x in intervallo [a, b] ? " << ((a <= x) && (x <= b)) << endl;

    return 0;
}

