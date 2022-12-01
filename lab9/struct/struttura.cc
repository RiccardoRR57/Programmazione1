#include <iostream>

using namespace std;

int main() {
    
    const int SEC_IN_MIN = 60;
    const int LUNGH_NOME_MAX = 20;

    struct sciatore {
        char nome[LUNGH_NOME_MAX + 1];
        int tempo_sec;
    };

    sciatore sciatore1;

    cout << "Inserire il nome: ";
    cin >> sciatore1.nome;

    cout <<"Inserire il tempo (min sec): ";
    int min, sec;
    cin >> min >> sec;
    sciatore1.tempo_sec = min * SEC_IN_MIN + sec;

    int n_char_nome;
    for (n_char_nome = 0; sciatore1.nome[n_char_nome] != '\0'; n_char_nome++);
    


    cout << "Il vincitore è: " << sciatore1.nome << endl
        << "Con un tempo di: " << sciatore1.tempo_sec / 60 << " minuti e " 
        << sciatore1.tempo_sec % 60 << " secondi" << endl
        << "Il nome è di " << n_char_nome << " caratteri." << endl;

}