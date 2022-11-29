#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double media(int valori[], int num_valori) {
    
    /*
    for (int i = 0; i < num_valori; i++)
    {
        cout << i << ": " << valori[i] << endl;
    }
    
    cout << "\n\n\n\n";
    */

    double med = 0;

    if (num_valori % 2 != 0) {
        int i;
        for(i = 0; i < num_valori; i++) {
            med += valori[i];
        }
        med /= i;
        return med;
    }
    int num_valori_dimezzato = num_valori/2;
    return (media(valori, num_valori_dimezzato) + media(valori + num_valori_dimezzato, num_valori_dimezzato))/2;
}

int main()
{   
    const int ARRAY_LENGTH = pow(2, 15);
    int n, max = INT32_MIN, min = INT32_MAX;
    int valori[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        n = rand();
        // cout << n << endl;
        if(n > max) max = n;
        if(n < min) min = n;
        valori[i] = n;
    }

    double media_effettiva = (media(valori, ARRAY_LENGTH));
    double media_teorica = RAND_MAX/2;
    double scostamento_assoluto = abs(media_effettiva - media_teorica);
    double scostamento_percentuale = (scostamento_assoluto / media_teorica)*100;


    cout << "Minimo:\t\t\t\t" << min << endl;
    cout << "Massimo:\t\t\t" << max << endl;
    cout << "Media:\t\t\t\t" << static_cast<int>(media_effettiva) << endl;
    cout << "Scostamento assoluto:\t\t" << static_cast<int>(scostamento_assoluto) << endl;
    cout << "Scostamento percentuale:\t" << scostamento_percentuale << "%" << endl;

    
    
    return 0;
}
