#include <iostream>
#include <stdlib.h>

using namespace std;

int e = 5, d = 173, r = 323;

int potenza_modulo(int numero, int esponente, int modulo)
{
    if (esponente == 0)
    {
        return 1;
    }
    return (numero * potenza_modulo(numero, esponente - 1, modulo)) % modulo;
}

int cifra(char carattere)
{
    return potenza_modulo(carattere, e, r);
}

char decifra(int numero)
{
    return (char)potenza_modulo(numero, d, r);
}

int main()
{
    int scelta_menu, numero;
    char carattere;

    while (true)
    {
        cout << "Chiave attuelmente in uso: (" << e << ", " << d << ", " << r << ")" << endl
             << endl;
        cout << "1 Inserimento nuova chiave RSA" << endl;
        cout << "2 Cifratura di un carattere" << endl;
        cout << "3 Decifratura di un carattere" << endl;
        cout << "4 Uscita" << endl;

        cin >> scelta_menu;
        if (scelta_menu == 4)
            break;

        switch (scelta_menu)
        {
        case 1:
            cout << "Inserisci una nuova terna di numeri da usare come chiave (e, d, r)" << endl;
            cin >> e >> d >> r;
            break;

        case 2:
            cout << "Inserisci carattere da cifrare: ";
            for (carattere = 0; carattere <= 0 || carattere >= r; cin >> carattere)
                ;

            cout << "Carattere cifrato: " << cifra(carattere) << endl;
            break;

        case 3:
            cout << "Inserisci numero da decifrare: ";
            for (numero = 0; numero <= 0 || numero >= r; cin >> numero)
                ;
            cout << "Carattere decifrato: " << decifra(numero) << endl;
            break;

        default:
            cout << "Inserire solamente codici tra 1 e 4" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}
