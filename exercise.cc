#include <iostream>

using namespace std;

int pow(int base, int e)
{
    if (e == 0)
        return 1;
    return base * pow(base, e - 1);
}

int *fun(int N, int M)
{
    int *arr = new int[M];

    for (int i = 0; i < M ; i--)
    {
        arr[M - 1 - i] = (N % pow(10, i + 1)) / pow(10, i);
    }
    return arr;
}

int main()
{
    int *arr = fun(12, 2);
    cout << arr[0] << arr[1] << endl;
}