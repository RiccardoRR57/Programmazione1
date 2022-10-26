#include <iostream>
using namespace std;

int main() 
{
    int a = 0, b = 0;

    cout << "Inserisci due interi:\n";
    
    cin >> a;
    cin >> b;

    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = ";
    
    if (b != 0)
        cout << a/b << " resto " << a%b << endl;
    else 
        cout << "Non si può dividere per 0" << endl;
    
    return 0;
}