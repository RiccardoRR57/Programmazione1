#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, fattoriale = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fattoriale *= i;
    }

    cout << fattoriale << endl;

    return 0;
}
