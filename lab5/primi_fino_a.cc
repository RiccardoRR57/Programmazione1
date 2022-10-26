#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0;
    cin >> a;

    for (int j = a; j > 1; j--)
    {
        if (j != 2)
        {
            if (j % 2 == 0)
            {
                continue;
            }
            for (int i = 3; i <= static_cast<int>(sqrt(j)); i += 2)
            {
                if (j % i == 0)
                    break;
            }
        }
        cout << j << endl;
    }
    return 0;
}
