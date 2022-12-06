#include <iostream>

using namespace std;

int main() {
    
    const int M=3, N=2;
    int m[M][N];
    int somma = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Inserire l'elemento alla riga " << i << ", colonna " << j << endl;
            cin >> m[i][j];
        }
        
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << m[i][j];
            cout << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < M; i++)
    {
        cout << "Somma riga " << i << ": ";
        for (int j = 0; j < N; j++)
        {
            somma += m[i][j];
        }
        cout << somma << endl;
    }
    

    return 0;
}