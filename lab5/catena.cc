#include <iostream>

using namespace std;

int main()
{
    int scelta;
    int numero_anelli_ferro = 0;
    int numero_anelli_rame = 0;
    const int MAX_ANELLI_RAME = 2;
    int posizione_rame_1;
    int posizione_rame_2;
    int rame_o_ferro;

    while (1)
    {
        cout << "1.\tInserisi anello" << endl
             << "2.\tElimina anello" << endl
             << "3.\tStampa catena" << endl
             << "4.\tEsci" << endl;

        cin >> scelta;

        if (scelta == 4)
            break;
        int posizione;
        switch (scelta)
        {
        case 1: // Aggiunta anello

            // Inserimento materiale con controllo
            do {
                cout << "Anello di rame o di ferro (1 per rame, 2 per ferro)" << endl;
                cin >> rame_o_ferro;
            } while (rame_o_ferro != 1 && rame_o_ferro != 2);            

            // Inserimento posizione con controllo validità
            do {
                cout << "Posizione?" << endl;
                cin >> posizione;
            } while (posizione < 1 || posizione > (numero_anelli_ferro + numero_anelli_rame + 1));

            // Aggiungere anello di ferro
            if (rame_o_ferro == 2) {
                numero_anelli_ferro++;
            }
            // Aggiungere anello di rame
            if (rame_o_ferro == 1) {

                if (numero_anelli_rame == MAX_ANELLI_RAME)
                    cout << "Numero massimo anelli di rame già raggiunto, azione fallita" << endl;
                else {
                    if (posizione_rame_1 == 0){
                        // Nessun anello di rame presente, cambio la posizione 1
                        posizione_rame_1 = posizione;
                    } else {
                        // Posizione 1 occupata, cambio la posizione 2
                        posizione_rame_2 = posizione;
                    }
                    numero_anelli_rame++;
                }
            }

            break;

        case 2:

            cout << "Posizione?" << endl;
            cin >> posizione;

            if (1 <= posizione && posizione <= (numero_anelli_ferro + numero_anelli_rame))
            {
                if (posizione == posizione_rame_1)
                {
                    posizione_rame_1 = 0;
                    numero_anelli_rame--;
                }
                else if (posizione == posizione_rame_2)
                {
                    posizione_rame_2 = 0;
                    numero_anelli_rame--;
                }
                else
                {
                    numero_anelli_ferro--;
                }
            }
            else
                cout << "Posizione non valida" << endl;

            break;

        case 3:

            for (int i = 1; i <= (numero_anelli_rame + numero_anelli_ferro); i++)
            {
                if (i == posizione_rame_1 || i == posizione_rame_2)
                    cout << "R";
                else
                    cout << "F";
            }
            cout << endl;

            break;

        default:

            cout << "Opzione non ammessa." << endl;

            break;
        }
    }

    return 0;
}
