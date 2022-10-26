#include <iostream>
using namespace std;

int main() {
    
    int h1 = 0, h2 = 0, m1 = 0, m2 = 0;

    cout << "Differenza tra due tempi" << endl;

    cout << "Inserisci il primo tempo: ('m s') ";
    cin >> h1 >> m1;
    int secondi1 = h1 * 60 + m1;

    cout << "Inserisci il secondo tempo: ('m  s') ";
    cin >> h2 >> m2;
    int secondi2 = h2 * 60 + m2;
    
    int diffSecondi = secondi1 - secondi2;

    cout << "La differenza è di " << abs(diffSecondi) << " secondi." << endl;
    return 0;
}