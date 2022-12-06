#include <iostream>

using namespace std;

const int LUNGH_NOME_MAX = 20;

struct sciatore {
        char nome[LUNGH_NOME_MAX];
        int tempo_sec;
    };

int elenco_inserisci(sciatore elenco[], int lungh_elenco, char nome[], int lungh_max) {
    if(lungh_elenco >= lungh_max) {
        cout << "Elenco pieno!" << endl;
        return 0;
    }
    cout << "elenco_inserisci: "<<nome<< "\n";

    for(int i = 0; i < LUNGH_NOME_MAX && nome[i] != '\0'; i++) {
        elenco[lungh_elenco].nome[i] = nome[i];
    }

    return lungh_elenco + 1;

}

void stampa_elenco(const sciatore elenco[], int lungh_elenco) {
    cout << "Ci sono " << lungh_elenco << " partecipanti" << endl;

    for (int j = 0; j < lungh_elenco; j++)
    {
        cout << "Partecipante " << j << ": " << elenco[j].nome << endl;
    }
}

int main() {
    
    const int SEC_IN_MIN = 60;
    const int MAX_PARTECIPANTI = 20;

    int num_partecipanti = 0, scelta;

    sciatore partecipanti[MAX_PARTECIPANTI];

    while(true) {

        cout << "1.\tInserimento di un nuovo partecipante" << endl;
        cout << "2.\tStampa numero partecipanti" << endl;
        cout << "3.\tGara" << endl;
        cout << "4.\tUscita" << endl;

        cin >> scelta;

        if(scelta == 4) break;

        switch (scelta)
        {  
        case 1:
            char nome[LUNGH_NOME_MAX];
            cout << "Inserire il nome: ";
            cin >> nome;
            num_partecipanti = elenco_inserisci(partecipanti, num_partecipanti, nome, MAX_PARTECIPANTI);
            break;

        case 2:
            stampa_elenco(partecipanti, num_partecipanti);
            break;

        
        default:
            break;
        }
    }



    

    
    


    
}