#include <iostream>

using namespace std;

int main()
{

    int dimensione = 0, tempo_download_secondi = 0;

    const int vel_server1_primi60minuti = 200;
    const int tempo_vel_alta = 3600;
    const int vel_server1_dopo60minuti = 50;
    const int vel_server2 = 100;

    const int kb_scaricati_server1_60secondi = vel_server1_primi60minuti * tempo_vel_alta;

    cin >> dimensione;

    if (dimensione <= kb_scaricati_server1_60secondi)
    {

        cout << "Server 1" << endl;
        tempo_download_secondi = dimensione / vel_server1_primi60minuti;
        cout << tempo_download_secondi / tempo_vel_alta << " : " << (tempo_download_secondi % tempo_vel_alta) / 60 << endl;
    }
    else
    {

        int tempo_server1, tempo_server2;
        tempo_server1 = 60 + (dimensione - kb_scaricati_server1_60secondi) / vel_server1_dopo60minuti;
        tempo_server2 = dimensione / vel_server2;
        if (tempo_server1 <= tempo_server2)
        {
            cout << "Server 1" << endl;
            cout << tempo_server1 / tempo_vel_alta << " : " << (tempo_server1 % tempo_vel_alta) / 60 << endl;
        }
        else
        {
            cout << "Server 2" << endl;
            cout << tempo_server2 / tempo_vel_alta << " : " << (tempo_server2 % tempo_vel_alta) / 60 << endl;
        }
    }

    return 0;
}
