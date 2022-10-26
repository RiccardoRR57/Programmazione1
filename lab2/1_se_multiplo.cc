#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;

    cout << "Inserisci due valori interi:" << endl;

    cin >> a;
    cin >> b;

    int resto = a % b;

    resto ++;

    cout << resto << endl;
    
    return 0;
}
