#include <iostream>
#include <stdlib.h>

using namespace std;

bool data_ok(int giorno, int mese, int anno)
{
    if (giorno < 1 || giorno > 31)
        return false;
    switch (mese)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (giorno == 31)
            return false;
    case 2:
        if (giorno == 30)
            return false;
        
        if ((anno % 400) && ((anno % 4) || !(anno % 100)))
        {
            if (giorno == 29)
                return false;
        }
        break;
    default:
        return false;
    }
    return true;
}

int main()
{
    int a, m, g;

    cout << "Immettere giorno" << endl;
    cin >> a;

    cout << "Immettere mese" << endl;
    cin >> m;

    cout << "Immettere anno" << endl;
    cin >> g;

    cout << data_ok(a, m, g) << endl;

    return 0;
}
