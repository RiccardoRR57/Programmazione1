#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Inserisci il valore di a: ";
    cin >> a;

    cout << "Inserisci il valore di b: ";
    cin >> b;

    cout << "Inserisci il valore di c: ";
    cin >> c;
    
    cout << "a < b oppure a < c ? " << ((a < b) || (a < c)) << endl;

    return 0;
}
