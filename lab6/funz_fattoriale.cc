#include <iostream>
#include <stdlib.h>

using namespace std;

int fattoriale(int a) {
    if(a==0) return 1;
    return a*fattoriale(a-1);
}

int main()
{
    int a;
    cin >> a;
    cout << fattoriale(a) << endl;

    return 0;
}

