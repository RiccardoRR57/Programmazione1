
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int i;
    cin >> i;
    if(i == 'a') cout << "si" << endl;
    cout << static_cast<char>(i);
    return 0;
}
