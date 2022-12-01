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
    
    for (int i = 0; i < 3; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }
    

    return 0;
}

