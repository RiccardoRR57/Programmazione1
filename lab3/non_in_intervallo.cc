#include <iostream>

using namespace std;

int main() {
    const int a = 1, b = 100;
    int n;

    cout << "Inserisci il valore di n: ";
    cin >> n;
    
    if (n < a || n > b) 
    { 
        cout << n << " non è incluso";
        cout << " in [" << a << ", " << b << "]" << endl;
    }

    return 0;
}

