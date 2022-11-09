#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    for (int i = 32; i < 128; i++)
    {
        cout << i << "\t" << char(i) << endl;
    }

    return 0;
}

