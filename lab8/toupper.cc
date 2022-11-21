#include <iostream>
#include <stdlib.h>

using namespace std;

bool upper(char &carattere)
{
    if (carattere <= 'z' && carattere >= 'a')
    {
        carattere += ('A' - 'a');
        return true;
    }
    return false;
}

int main()
{
    char a = 'f';
    upper(a);
    cout << a << endl;

    return 0;
}
