#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    // system("ls");
    // cout << "Ho finito" << endl;

    const int TEMPO_MAX = 10;

    int secs = time(0);

    for(int i = 0; i < TEMPO_MAX; i++) {
        cout << "\r" << (time(0) - secs) / 60 << " : " << (time(0) - secs) % 60 << flush;
        system("sleep 1");
    }
    
    return 0;
}
