#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int ARRAY_LENGTH = 3;
    int prova[ARRAY_LENGTH];
    cout << "Inserisci 3 interi" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> prova[i];
    }
    
    int max = INT32_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(prova[i] > max) max = prova[i];
    }
    cout << "max: " << max << endl;
    

    return 0;
}

