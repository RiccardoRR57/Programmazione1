#include <iostream>
#include <stdlib.h>

using namespace std;

int * crea_array(int &dim) {

    int array_length;
    cout << "Quanto è lungo l'array?" << endl;
    cin >> array_length;
    dim = array_length;

    int *array_din = new int[array_length];
    for(int j = 0; j < array_length; j++) {
        cin >> array_din[j];
    }

    return array_din;
}

int main()
{
    int dimensione = 0;
    int* prova = crea_array(dimensione);

    for (int i = 0; i < dimensione; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }

    return 0;
}

