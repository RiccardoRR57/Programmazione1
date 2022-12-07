#include <iostream>

using namespace std;

const int MAX_NUM_ELEM = 64; 

struct pila {
	int elementi[MAX_NUM_ELEM];
	int num_elem;
};

pila push(int elemento, pila destinazione) {

	if(destinazione.num_elem >= MAX_NUM_ELEM) {
		cout << "Pila piena, non si può aggiungere niente" << endl;
		return destinazione;
	}

	destinazione.elementi[destinazione.num_elem] = elemento;
	destinazione.num_elem++;
	
	return destinazione;
}

pila pop(int &elem_estratto, pila origine) {
	
	if(origine.num_elem <= 0) {
		"Pila vuota, non si può estrarre niente" << endl;
		return origine; 
	}

	origine.num_elementi -= 1;
	return origine;
}

int main()
{


	return 0;
}
