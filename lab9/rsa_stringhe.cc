#include <iostream>
#include <stdlib.h>

using namespace std;

struct stringa_cifrata
{
    int stringa[LUNGH_MAX];
    int lunghezza;
};

int e = 5, d = 173, r = 323;
const int LUNGH_MAX = 256;

int potenza_modulo(int numero, int esponente, int modulo)
{
    if (esponente == 0)
    {
        return 1;
    }
    return (numero * potenza_modulo(numero, esponente - 1, modulo)) % modulo;
}

int cifra(int numero)
{
    return potenza_modulo(numero, e, r);
}

stringa_cifrata cifra_frase(char frase[]) {
    stringa_cifrata str;
    
    for(str.lunghezza = 0; frase[str.lunghezza] != '\0'; i++) {
        str.stringa[str.lunghezza] = cifra(frase[str.lunghezza]);
    }
    return str;
}

int decifra(int numero)
{
    return potenza_modulo(numero, d, r);
}

char[] decifra_frase(stringa_cifrata frase) {

    int i;
    char frase_decifrata[LUNGH_MAX];

    for(i = 0; i < frase.lunghezza; i++) {
        frase_decifrata[i] = cifra(frase.stringa[i]);
    }
    frase_decifrata[i] = '\0';

    return frase_decifrata
}

int main()
{
    int scelta_menu;
    int frase[LUNGH_MAX];

    while (true)
    {
        cout << "Chiave attuelmente in uso: (" << e << ", " << d << ", " << r << ")" << endl
             << endl;
        cout << "1 Inserimento nuova chiave RSA" << endl;
        cout << "2 Cifratura di una frase" << endl;
        cout << "3 Decifratura di una frase" << endl;
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
            cout << "Inserisci frase da cifrare: ";
            //for (numero = 0; numero <= 0 || numero >= r; cin >> numero);
            cin >> frase;
            
            cout << "Frase cifrata: " << cifra_frase(frase) << endl;
            break;

        case 3:
            cout << "Inserisci frase da decifrare: ";
            for (numero = 0; numero <= 0 || numero >= r; cin >> numero)
                ;

            cout << "Numero decifrato: " << decifra(numero) << endl;
            break;

        default:
            cout << "Inserire solamente codici tra 1 e 4" << endl;
            break;
        }
    }
    return 0;
}
