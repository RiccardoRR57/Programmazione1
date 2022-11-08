#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int p) {
    if(p == 1) return false;
    if(p == 2) return true;
    if(p % 2 == 0) return false;
    for (int i = 3; i < sqrt(p); i++)
    {
        if(p % i == 0) return false;
    }
    return true;
}

int main()
{
    int numero;
    do{
        cin >> numero;
    } while(numero <= 0);

    if(isPrime(numero)) 
        cout << numero << " è un numero primo" << endl;

    return 0;
}

