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

    // Calcolo il numero di cifre di n
    for (i = 0; abs(n) > potenza(10, i); i++)
        ;

    // lunghezza i+2 perchè mi serve un posto per il segno e un posto per il terminatore
    char *stringa = new char[i+2];

    // serve se n = 0
    stringa[0] = '0';

    // Primo carattere della stringa è il segno
    if (n < 0)
        stringa[0] = '-';
    else if (n > 0)
        stringa[0] = '+';
    
    // Il segno non mi serve più
    n = abs(n);


    for(int j = i; j > 0; j--) {

        // intero corrispondente alla j-esima cifra
        temp = (n / potenza(10, j-1)) % 10;
        
        // '0' + temp = codice del carattere corrispondente alla cifra temp
        stringa[i - j + 1] = static_cast<char>('0' + temp);
        
    }

    // inserisco terminatore della stringa
    stringa [i+1] = '\0';
    
    return stringa;
}

int main()
{
    cout << int_to_string(0) << endl;

    return 0;
}