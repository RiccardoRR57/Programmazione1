#include <iostream>

using namespace std;

int main() {
    int i, j;

    cout << "Inserisci il valore di i: ";
    cin >> i;

    cout << "Inserisci il valore di j: ";
    cin >> j;
    
    int app = i;
    i = j;
    j = app;
    
    cout << "Dopo lo scambio: i = " << i << " j = " << j << endl;

    return 0;
}
