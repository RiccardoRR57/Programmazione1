#include <iostream>
#include <stdlib.h>

using namespace std;

void bin_sort(int numeri[], int ARRAY_LENGTH)
{

    for (int n = 0; n < ARRAY_LENGTH; n++)
    {
        int min = numeri[n], i;
        for (i = n; i < ARRAY_LENGTH; i++)
        {
            if (numeri[i] < min)
                min = numeri[i];
        }

        for (int j = i; j > n; j--)
        {
            numeri[j] = numeri[j - 1];
        }
        numeri[n] = min;

        cout << "min: " << min << endl;
        for (int i = 0; i < ARRAY_LENGTH; i++)
        {
            cout << i << ": " << numeri[i] << endl;
        }
        cout << endl;
    }

    // return numeri;
}

int main()
{
    const int ARRAY_LENGTH = 5;
    int prova[ARRAY_LENGTH];
    cout << "Inserisci 5 interi" << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cin >> prova[i];
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }

    cout << endl
         << endl;

    bin_sort(prova, ARRAY_LENGTH);

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }

    return 0;
}
