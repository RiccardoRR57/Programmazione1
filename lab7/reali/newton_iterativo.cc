#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

double f(double x) { return exp(x) - x * x - 2.0; }
double newton(double inf, double sup, double precision)
{
    double med;
    while (sup - inf > precision)
    {
        med = (inf + sup) / 2.0;
        if (f(med) == 0.0)
            return med;
        if (f(med) * f(inf) < 0.0)
            sup = med;
        else
            inf = med;
    }
    return (inf + sup) / 2.0;
}

int main()
{
    cout << newton(0, 3, 0.000001) << endl;

    return 0;
}
