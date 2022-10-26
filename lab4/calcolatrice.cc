#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int operatore1, operatore2;
    bool continua = true;

    while(continua) {
        int codice_operazione, risultato = 0;

        cout << "Selezionare un'operazione: " << endl
        << "1. Addizione " << endl
        << "2. Sottrazione " << endl
        << "3. Moltiplicazione " << endl
        << "4. Divisione intera " << endl
        << "5. Modulo " << endl
        << "6. Esci " << endl;

        cin >> codice_operazione;

        cout << "Inserisci i due operandi" << endl;
        cin >> operatore1 >> operatore2;

        switch (codice_operazione)
        {
        case 1:
            risultato = operatore1 + operatore2;
            cout << risultato << endl;
            break;

        case 2:
            risultato = operatore1 - operatore2;
            cout << risultato << endl;
            break;

        case 3:
            risultato = operatore1 * operatore2;
            cout << risultato << endl;
            break;
        
        case 4:
            risultato = operatore1 / operatore2;
            cout << risultato << endl;
            break;
        
        case 5:
            risultato = operatore1 % operatore2;
            cout << risultato << endl;
            break;

        case 6:
            continua = false;
            break;
        
        default:
            cout << "Codice non valido" << endl;
            break;
        }
    }

    return 0;
}
