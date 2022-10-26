#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;

    if(b > a) {
        int appoggio = b;
        b = a;
        a = appoggio;
    }

    if ((a - b) != 2)
        return 0;


    for (int i = 0; i <= 2; i += 2)
    {
        if ((a + i) != 2)
        {
            if ((a + i) % 2 == 0)
            {
                return 0;
            }
            for (int j = 3; j <= static_cast<int>(sqrt(a + i)); j += 2)
            {
                if ((a + i) % j == 0)
                    return 0;
            }
        }
    }
    cout << a << " e " << b << " sono primi gemelli" << endl;
    return 0;
}
