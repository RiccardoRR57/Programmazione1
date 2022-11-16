#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    int numeratore, denominatore;
    cout << "Immettere due interi" << endl;
    cin >> numeratore >> denominatore;
    float numer_float = numeratore;
    cout << numeratore << " / " << denominatore << " = " << numer_float/denominatore << endl;

    return 0;
}

