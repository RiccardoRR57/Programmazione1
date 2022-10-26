#include <iostream>
using namespace std;

int main() {
    int a = 0;

    cout << "Inserisci un valore intero: ";

    cin >> a;

    int res = -abs(a) / (a + 1);

    cout << res << endl;
    
    return 0;
}
