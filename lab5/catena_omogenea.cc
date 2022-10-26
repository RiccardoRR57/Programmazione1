#include <iostream>

using namespace std;

int main()
{
    int bottone, numero_anelli = 0;
    while(1) {
        cout << "1.\tInserisi anello" << endl <<
            "2.\tElimina anello" << endl << 
            "3.\tStampa catena" << endl <<
            "4.\tEsci" << endl;

        cin >> bottone;

        if(bottone == 4)
            break;
        int posizione;
        switch (bottone)
        {
        case 1:

            cout << "Posizione?" << endl;
            cin >> posizione;

            if(1 <= posizione && posizione <= (numero_anelli + 1))
                numero_anelli++;
            else
                cout << "Posizione non valida" << endl;

            break;
        
        case 2:

            cout << "Posizione?" << endl;
            cin >> posizione;

            if(1 <= posizione && posizione <= numero_anelli)
                numero_anelli--;
            else
                cout << "Posizione non valida" << endl;

            break;
        
        case 3:

            for (int i = 0; i < numero_anelli; i++){
                cout << "F";}
            cout << endl;

            break;
        
        default:

            cout << "Opzione non ammessa." << endl;

            break;
        }
    }

    return 0;
}
