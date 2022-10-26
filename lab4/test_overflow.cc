#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b;
    const int MAX_INT = 2147483647;
    const int MIN_INT = -MAX_INT -1;
    cout << "Inserisci due numeri " << endl;
    cin >> a >> b;

    int somma = a + b;
    cout << somma << endl;

    if ((a > 0 && b < 0) || (a < 0 && b > 0))
        return 0;

    if ((a > 0 &&  b > (MAX_INT - a)) || (a < 0 && b < (MIN_INT - a)))
        cout << "C'è stato overflow" << endl;


    int prodotto = a * b;
    cout << prodotto << endl;
    if ((MAX_INT / a) < b)
        cout << "C'è stato overflow" << endl;

    return 0;
}
