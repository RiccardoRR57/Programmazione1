#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int trovaSecondoQuadrato(int n, int i) {

    for (int j = n; j >= i; j--)
    {
        if(n == i*i + j*j)
        {
            return j;
        }
    }
    return -1;
}

void printSommaQuadrati(int n) {

    for(int i = 0; 2*i*i <= n; i++)
    {
        int j = trovaSecondoQuadrato(n, i);

        if(j != -1)
        {
            cout << n << " = " << i << "^2 + " << j << "^2" << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        printSommaQuadrati(i);
    }

    return 0;    
}

