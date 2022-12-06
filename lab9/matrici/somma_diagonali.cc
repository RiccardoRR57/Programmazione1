#include <iostream>

using namespace std;

int main() {
    
    const int M=3;
    int m[M][M];
    int somma1 = 0, somma2 = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Inserire l'elemento alla riga " << i << ", colonna " << j << endl;
            cin >> m[i][j];
        }
        
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << m[i][j];
            cout << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < M; i++) {
        somma1 += m[i][i];
        somma2 += m[M-i-1][i];
    }
    cout << somma1 << "   " << somma2 << endl;
    cout << "Differenza tra le 2 diagonali: " << somma1-somma2 << endl;

    return 0;
}