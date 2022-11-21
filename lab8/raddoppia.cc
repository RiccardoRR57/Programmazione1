#include <iostream>
#include <stdlib.h>

using namespace std;

void raddoppia(int &a) {
    a *= 2;
}

int main()
{
    int a = 4;
    raddoppia(a);
    cout << a << endl;

    return 0;
}

