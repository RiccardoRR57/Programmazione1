#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int array_length;
    cout << "Quanto è lungo l'array?" << endl;
    cin >> array_length;

    int * prova = new int[array_length];

    cout << "Inserisci " << array_length << " interi" << endl;

    for (int i = 0; i < array_length; i++)
    {
        cin >> prova[i];
    }
    
    for (int i = 0; i < array_length; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }

    cout << "Quanti numeri vuoi salvare?" << endl;
    cin >> array_length;
    
    int * nuovo_array = new int[array_length];
    for(int i = 0; i < array_length; i++) {
        nuovo_array[i] = prova[i];
    }

    delete [] prova;

    for (int i = 0; i < array_length; i++)
    {
        cout << i << ": " << nuovo_array[i] << endl;
    }

    return 0;
}

