#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int power(int base, int exp) {
    // 0^0 è indeterminato
    if(base == 0 && exp == 0) return -1;

    int result = 1;
    for(int i = 1; i <= exp; i++){
        result *= base;
    }
    return result;
    
}

int main()
{
    int base = 0, exp = 0;

    cout << "Immettere base" << endl; 
    do {
        cin >> base;
    } while(base < 0);

    cout << "Immettere esponente" << endl;
    do {
        cin >> exp;
    } while(exp < 0);

    cout << power(base, exp) << endl;


    return 0;
}
