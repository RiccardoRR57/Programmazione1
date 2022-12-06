#include <iostream>

using namespace std;

int main() {

    int m[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Inserire l'elemento alla riga " << i << ", colonna " << j << endl;
            cin >> m[i][j];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
    

    return 0;
}