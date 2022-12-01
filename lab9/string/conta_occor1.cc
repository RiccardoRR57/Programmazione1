#include <iostream>

using namespace std;

int main() {
    char stringa[] = "aoèwefnqoewibgqp vòowe ibvonvoipqbvpqiebu73g4q9";
    char c;
    int contatore = 0;

    cout << "Conto occorrenze di quale carattere? ";
    cin >> c;

    for (int i = 0; stringa[i] != '\0'; i++)
    {
        if(stringa[i] == c) contatore++;
    }
    
    cout << "Il carattere appare " << contatore << " volte." << endl;
}