#include <iostream>
#include <cstring>

using namespace std;

int conta_occor(const char stringa[], char carattere) {

    int contatore = 0;


    for (int i = 0; i < strlen(stringa); i++)
    {
        if (tolower(stringa[i]) == tolower(carattere))
            contatore++;
    }

    return contatore;
}

int main()
{
    char stringa[30];
    char c;

    cout << "inserisci la parola in cui cercare: ";
    cin >> stringa;
    cout << "Stringa: " << stringa << endl;

    cout << "Quale carattere devo cercare?" << endl;
    cin >> c;

    cout << c << " compare " << conta_occor(stringa, c) << " volte nella stringa "
         << stringa << endl;
    return 0;
}