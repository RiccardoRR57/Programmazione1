#include <iostream>
#include <stdlib.h>

using namespace std;

const int ALPHABET_N = 26;
int contenitore[ALPHABET_N];
int cap, numElem;

bool Inizializza(int N) {
    // Controllo che la capienza sia positiva
    if(N <= 0) {
        cout << "La capienza deve esser strettamente positiva" << endl;
        return false;
    } 
    
    cap = N;
    numElem = 0;
    for (int i = 0; i < ALPHABET_N; i++)
    {
        contenitore[i] = 0;
    }

    return true;
}

bool Inserisci(char p) {

    // Controllo, solo lettere minuscole ammesse nel contenitore.
    if(p < 'a' || p > 'z') {
        cout << "Si possono inserire solo lettere minuscole" << endl;
        return false;
    }

    int index = p - 'a';
    contenitore[index]++;
    numElem ++;

    return true;
}

int Estrai(char p) {
    
    // Controllo, solo lettere minuscole ammesse nel contenitore.
    if(p < 'a' || p > 'z') {
        cout << "Si possono estrarre solo lettere minuscole" << endl;
        return false;
    }

    int index = p - 'a';
    numElem -= contenitore[index];
    contenitore[index] = 0;

    return true;
}

bool Modifica(int N) {
    
    // Controllo che tutti gli elementi ci stiano
    if(N < numElem) {
        cout << "Nuova capienza troppo piccola affinche ci stiano tutti gli elementi" << endl;
        return false;
    }

    cap = N;
    return true;
}

int capienza() {
    return cap;
}

int quanti() {
    return numElem;
}

void stampa() {

    char lettera = 'a';
    cout << "<";
    for(int i = 0; i < ALPHABET_N; i++) {
        if(contenitore[i] != 0) {
            cout << static_cast<char>('a' + i) << ":" << contenitore[i] << ", ";
        }
    }
    cout << ">" << endl;
}

int main()
{
	const char Menu[] = 
	    "\nComandi disponibili:\n"
	    "\ti - per inserire un elemento nel contenitore\n"
	    "\te - per estrarre elementi dal contenitore\n"
	    "\tc - per modificare la capienza del contenitore\n"
	    "\tf - per informazioni sul contenitore\n"
	    "\tt - per terminare\n" ;
	
	cout<< "Inizializzazione contenitore.\n" ;
	cout<< "Immetterne la capienza (e premere Invio): " ;
	int n;
	cin>>n ;
	Inizializza(n) ;
	cout<<endl ;
	while(true) {
	    char comando;

	    stampa() ;
	    cout<<Menu<<"\n\nImmettere comando e premere Invio: " ;
	    cin>>comando ; // 'consumiamo' il precedente newline
	    switch (comando) {
	    case 'i': {
		char p;
		cout<<"Inserisci nome elemento " ;
		cin>>p ;
		Inserisci(p);
		break;
	    }
	    case 'e': {
		char p;
		cout<<"Inserisci nome elemento " ;
		cin>>p ;
		Estrai(p);
		break;
	    }
	    case 'c': {
		int i;
		cout<<"Inserisci nuova capienza (e premi Invio): " ;
		cin>>i ;
		Modifica(i);
		break;
	    }
	    case 'f': 
		cout<<"Capienza: "<<capienza()<<"\tElementi: "
		    <<quanti()<<endl ;
		break;
	    case 't': 
		return 0 ;
	    default: 
		cout<< "Comando non valido\n" ;
	    }
	}
	return 0 ;
}
