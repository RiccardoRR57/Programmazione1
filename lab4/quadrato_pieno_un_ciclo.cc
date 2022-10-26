#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout << "Lato: ";
    cin >> n;

    for(int i = 1; i <= (n*n); i++) {
        cout << "#";
        if (i % n == 0)
            cout << endl;
    }

    return 0;
}
