#include <iostream>

using namespace std;

int main() {
    char stringa[] = "Ciao mondo";

    int lungh_string;
    for (lungh_string = 0; stringa[lungh_string] != '\0'; lungh_string++);

    cout << "La stringa è composta da " << lungh_string << " caratteri." << endl;
    
}