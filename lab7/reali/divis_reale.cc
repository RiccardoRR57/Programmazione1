#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    float numeratore, denominatore;
    cout << "Immettere due reali" << endl;
    cin >> numeratore >> denominatore;
    cout << setprecision(12) << numeratore << " / " << denominatore << " = " << numeratore/denominatore << endl;

    return 0;
}

