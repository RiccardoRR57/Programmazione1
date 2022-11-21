#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

const float POSIZIONE_MAX = 20.0, POSIZIONE_MIN = -20.0;
const float LUNGH_SCATTO_SINGOLO = 0.1;

enum Direzione
{
    su = 1,
    giu = -1
};

float singolo_impulso(float posizione_attuale, Direzione direzione)
{
    return posizione_attuale + direzione * LUNGH_SCATTO_SINGOLO;
}

int main()
{
    float posizione_ascensore = 0.0;
    int numero_scatti;
    while (true)
    {
        cout << "Posizione attuale: " << posizione_ascensore << endl;
        cout << "Inserire il numero di scatti da fare (Inserire 0 per terminare)" << endl;
        cin >> numero_scatti;

        if (numero_scatti == 0)
            return 0;

        Direzione dir;
        if (numero_scatti < 0)
            dir = giu;
        else
            dir = su;

        for (int i = 0; i < abs(numero_scatti); i++)
        {
            if ((posizione_ascensore >= POSIZIONE_MAX && dir == su) || posizione_ascensore <= POSIZIONE_MIN && dir == giu)
            {
                cout << "L'ascensore è al limite, impossibile procedere" << endl;
                break;
            }
            posizione_ascensore = singolo_impulso(posizione_ascensore, dir);
        }

        if (posizione_ascensore > 0)
            posizione_ascensore += 0.05;
        if (posizione_ascensore < 0)
            posizione_ascensore -= 0.05;

        posizione_ascensore = static_cast<float>(static_cast<int>(posizione_ascensore * 10)) / 10;

        if(posizione_ascensore == 1.0) {
            cout << "non staccare le funi!!!" << endl;
        }
        else cout << "staccare le funi" << endl;
    }

    return 0;
}
