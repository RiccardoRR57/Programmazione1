#include <iostream>
#include <cmath>

using namespace std;

int potenza(int base, int esponente) {
    if(esponente == 0) return 1;
    return potenza(base, esponente-1) * base;
}

char *int_to_string(int n)
{
    int i, temp;
    for (i = 0; abs(n) > potenza(10, i); i++)
        ;

    char *stringa = new char[i+2];

    stringa[0] = '0';

    if (n < 0)
        stringa[0] = '-';
    else if (n > 0)
        stringa[0] = '+';
    
    n = abs(n);

    for(int j = i; j > 0; j--) {

        temp = (n / potenza(10, j-1)) % 10;
        
        stringa[i - j + 1] = static_cast<char>('0' + temp);
        
    }
    stringa [i+1] = '\0';
    
    return stringa;
}

int main()
{

    cout << int_to_string(0) << endl;

    return 0;
}