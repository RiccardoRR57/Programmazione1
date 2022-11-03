#include <iostream>
#include <stdlib.h>

using namespace std;

int funz_max(int a, int b) {
    if(a > b)
        return a;
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << funz_max(a, b) << endl;

    return 0;
}

