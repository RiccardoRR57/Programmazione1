#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

bool is_prime(int p) {
    if(p == 1) return false;
    if(p == 2) return true;
    if(p % 2 == 0) return false;
    for (int i = 3; i < sqrt(p); i++)
    {
        if(p % i == 0) return false;
    }
    return true;
}

bool goldbach_ok(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if(is_prime(i) && is_prime(n-i)) return true;
    }
    return false;
}

int goldach_false(int inf, int sup) {
    if (inf % 2 != 0) inf++;

    for(int i = inf; i <= sup; i+=2) {
        if(!goldbach_ok(i)) return i;
    }
    return 1;
}

int main()
{
    int sup = 0, inf = 0;

    cout << "Immettere estremo inf" << endl; 
    {
        cin >> inf;
    } while(inf < 1);

    cout << "Immettere estremo sup" << endl;
    {
        cin >> sup;
    } while(sup < inf);

    int numero_fallimento = goldach_false(inf, sup);

    if(numero_fallimento == 1)
        cout << "Bene!" << endl;
    else 
        cout << numero_fallimento << endl;


    return 0;
}
