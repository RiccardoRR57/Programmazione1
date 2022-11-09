#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    enum giorno_t {lunedi, martedi, mercoledi, giovedi, venerdi, sabato, domenica};

    giorno_t lun = lunedi;

    cout << lun << endl;
    return 0;
}

