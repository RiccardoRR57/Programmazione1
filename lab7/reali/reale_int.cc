#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    float numero;
    cout << "Immettere un reale" << endl;
    cin >> numero;
    int num_int = static_cast<int>(numero);
    cout << numero << endl << num_int << endl;

    return 0;
}

