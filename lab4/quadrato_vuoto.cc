#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    /*
    int n;
    cout << "Lato: ";
    cin >> n;

    for(int j = 0; j < n; j++) {
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < (n-2); i++) {
        cout << "#";
        for(int j = 0; j < (n-2); j++) {
            cout << " ";
        }
        cout << "#" << endl;
    }

    for(int j = 0; j < n; j++) {
        cout << "#";
    }
    cout << endl;
    */

   int n;
    cout << "Lato: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == (n-1) || j == (n-1))
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
