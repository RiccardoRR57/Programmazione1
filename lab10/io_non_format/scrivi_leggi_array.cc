#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    float a[3] = {1.2, 3.4, 5.6};

    ofstream file_bin_o("dati.dat");
    ofstream file_form_o("dati.txt");

    for (int i = 0; i < 3; i++)
    {
        file_form_o << a[i] << endl;
    }

    file_bin_o.write(
        reinterpret_cast<char *>(a),
        sizeof(float) * 3
    );

    
    file_bin_o.close();
    file_form_o.close();

    ifstream file_bin_i("dati.dat");
    ifstream file_form_i("dati.txt");

    float c[3];

    for (int i = 0; i < 3; i++)
    {
        //file_form_i >> a[i];
        //cout << a[i] << endl;
    }

    file_bin_i.read(
        reinterpret_cast<char *>(c),
        sizeof(float) * 3
    );


    for (int i = 0; i < 3; i++)
    {
        cout << c[i] << endl;
    }


    





}
