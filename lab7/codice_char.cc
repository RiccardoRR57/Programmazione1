#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int carattere;
    cout << "immettere un intero" << endl;
    cin >> carattere;
    if(' ' <= carattere && '~' >= carattere)
    {
        cout << (char)carattere << endl;
        return 0;
    }
    cout << "Carattere non stampabile" << endl;

    return 0;
}

