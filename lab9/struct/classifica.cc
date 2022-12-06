#include <iostream>
#include <cstring>

using namespace std;

const int LUNGH_NOME_MAX = 20;

struct sciatore
{
    char nome[LUNGH_NOME_MAX];
    int tempo_sec;
};

int elenco_inserisci(sciatore elenco[], int lungh_elenco, char nome[], int lungh_max)
{
    if (lungh_elenco >= lungh_max)
    {
        cout << "Elenco pieno!" << endl;
        return 0;
    }
    
    strcpy(elenco[lungh_elenco].nome, nome);

    return lungh_elenco + 1;
}

void stampa_elenco(const sciatore elenco[], int lungh_elenco)
{
    cout << "Ci sono " << lungh_elenco << " partecipanti" << endl;

    for (int j = 0; j < lungh_elenco; j++)
    {
        cout << "Partecipante " << j << ": " << elenco[j].nome << endl;
    }
}

sciatore vincitore(const sciatore elenco[], int lungh_elenco)
{
    sciatore vincitore;

    if (lungh_elenco == 0)
    {
        vincitore.tempo_sec = -1;
        return vincitore;
    }

    vincitore = elenco[0];

    for (int i = 1; i < lungh_elenco; i++)
    {
        if (elenco[i].tempo_sec < vincitore.tempo_sec)
        {
            vincitore = elenco[i];
        }
    }

    return vincitore;
}

int main()
{

    const int SEC_IN_MIN = 60;
    const int MAX_PARTECIPANTI = 20;

    int num_partecipanti = 0, scelta;

    bool gara_valida = false;

    sciatore partecipanti[MAX_PARTECIPANTI];
    sciatore vin;

    while (true)
    {

        cout << "1.\tInserimento di un nuovo partecipante" << endl;
        cout << "2.\tStampa numero partecipanti" << endl;
        cout << "3.\tGara" << endl;
        cout << "4.\tStampa primo classificato" << endl;
        cout << "5.\tUscita" << endl;

        cin >> scelta;

        if (scelta == 5)
            break;

        switch (scelta)
        {
        case 1:
            char nome[LUNGH_NOME_MAX];
            cout << "Inserire il nome: ";
            cin >> nome;
            num_partecipanti = elenco_inserisci(partecipanti, num_partecipanti, nome, MAX_PARTECIPANTI);
            gara_valida = false;
            break;

        case 2:
            stampa_elenco(partecipanti, num_partecipanti);
            break;

        case 3:

            if (num_partecipanti == 0)
            {
                cout << "Inserire almeno un partecipante!" << endl;
            }
            else
            {
                for (int j = 0; j < num_partecipanti; j++)
                {
                    cout << "Inserire il tempo (min sec) di " << partecipanti[j].nome << ": ";
                    int min, sec;
                    cin >> min >> sec;
                    partecipanti[j].tempo_sec = min * SEC_IN_MIN + sec;
                }
                gara_valida = true;
            }
            break;

        case 4:

            vin = vincitore(partecipanti, num_partecipanti);
            if (vin.tempo_sec == -1)
            {
                cout << "Inserire almeno un partecipante!" << endl;
            }
            else if(!gara_valida) {
                cout << "Gara non ancora disputata da questi partecipanti" << endl;
            }
            else
            {
                cout << "Il vincitore è: " << vin.nome << endl
                     << "Con un tempo di: " << vin.tempo_sec / 60 << " minuti e "
                     << vin.tempo_sec % 60 << " secondi" << endl;
            }
            break;

        default:
            break;
        }
    }
}