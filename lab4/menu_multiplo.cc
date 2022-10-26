#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    char b = 'A';

    cout << "Scegliere un'opzione" << endl;

    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Opzione A" << endl;
        break;
    case 3:
        cout << "Opzione B" << endl;
        break;
    case 4:
    case 5:
        cout << "Opzione C" << endl;
        break;
    case 6:
        cout << "Opzione D" << endl;
        break;
    default:
        cout << "Sceglta un'opzione non disponibile" << endl;
        break;
    }

    return 0;
}
