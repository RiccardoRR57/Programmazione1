#include <iostream>
#include <stdlib.h>

using namespace std;

int somma(int valori[], int numero_valori) {
    int somma = 0;
    for(int i = 0; i < numero_valori; i++) {
        somma += valori[i];
    }
    return somma;
}

int main()
{
    const int ARRAY_LENGTH = 100;
    int temperature[ARRAY_LENGTH];
    int numero_temperature;
    cout << "Quante temperature vuoi inserire?" << endl;
    cin >> numero_temperature;

    for (int i = 0; i < numero_temperature; i++)
    {
        cout << i << ": ";
        cin >> temperature[i];
    }
    
    int somma_temperature = somma(temperature, numero_temperature);
    cout << "somma: " << somma_temperature << endl;
    
    int media_temperature = somma_temperature / numero_temperature;
    cout << "media: " << media_temperature << endl;

    for (int i = 0; i < numero_temperature; i++)
    {
        if(temperature[i] > media_temperature)
            cout << temperature[i] << " è sopra la media" << endl;
    }
    

    return 0;
}

