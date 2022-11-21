#include <iostream>
#include <stdlib.h>

using namespace std;

void raddoppia(int prova[], int ARRAY_LENGTH){
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        prova[i] *= 2;
    }
}

int main()
{
    const int ARRAY_LENGTH = 3;
    int prova[ARRAY_LENGTH];
    cout << "Inserisci 3 interi" << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cin >> prova[i];
    }
    
    raddoppia(prova, ARRAY_LENGTH);
    
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << i << ": " << prova[i] << endl;
    }
    

    return 0;
}

