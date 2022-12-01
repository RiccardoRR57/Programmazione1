#include <iostream>

using namespace std;

int main() {
    char stringa[] = "sodhgoiwehf owefhoiwhec oiwhefiqh";
    char stringa2[100];

    int lungh_string;
    for (lungh_string = 0; stringa[lungh_string] != '\0'; lungh_string++) {
        stringa2[lungh_string] = stringa[lungh_string];
    };

    stringa2[lungh_string] = '\0';

    cout << "stringa1: " << stringa << endl << "stringa2: " << stringa2 << endl;
    
}