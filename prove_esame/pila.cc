#include <iostream>

using namespace std;

const int MAX_NUM_ELEM = 64;

struct pila_t
{
	int elementi[MAX_NUM_ELEM];
	int num_elem;
};

bool push(int elemento, pila_t &destinazione)
{

	if (destinazione.num_elem >= MAX_NUM_ELEM)
	{
		//		cout << "Pila piena, non si può aggiungere niente" << endl;
		return false;
	}

	destinazione.elementi[destinazione.num_elem] = elemento;
	destinazione.num_elem++;

	return true;
}

bool pop(int &elem_estratto, pila_t &origine)
{

	if (origine.num_elem <= 0)
	{
		//		"Pila vuota, non si può estrarre niente" << endl;
		return false;
	}

	elem_estratto = origine.elementi[origine.num_elem - 1];
	origine.num_elem--;
	return true;
}

void inserimento(pila_t &destinazione)
{
	cout << "Che intero si vuole inserire?" << endl;
	int n;
	cin >> n;

	if (!push(n, destinazione))
	{
		cout << "Inserimento fallito, pila piena" << endl;
	}
}

void estrazione_stampa(pila_t &origine, int n_elem_da_estrarre)
{
	int elem = 0;
	for (int i = 0; i < n_elem_da_estrarre; i++)
	{
		if (!pop(elem, origine))
		{
			cout << "Estrazione terminata prima del previsto, pila vuota" << endl;
			break;
		}
		cout << "Estratto " << elem << endl;
	}
}

bool riserva_memoria(pila_t &pila)
{
	if (MAX_NUM_ELEM <= pila.num_elem) {
		return false;
	}
	
	pila.num_elem++;
	return true;
}

void riserva_memoria_stampa(pila_t &pila, int &n_elem_da_riservare)
{
	for (int i = 0; i < n_elem_da_riservare; i++)
	{
		if(!riserva_memoria(pila)) {
			cout << "Riservati solo " << i << " elementi, pila piena" << endl;
			break;
		}
		cout << "Riservato " << pila.elementi[pila.num_elem - 1] << endl;
	}
	
}

int main()
{
	// definizione di un oggetto di tipo pila
	pila_t pila;
	pila.num_elem = 0; // NON DIMENTICATE LE INIZIALIZZAZIONI !!!

	while (true)
	{
		int scelta;
		int n;

		cout << "\t1 Inserimento in pila da stdin\n";
		cout << "\t2 Estrazione e stampa su stdout\n";
		cout << "\t3 Riserva memoria e stampa su stdout\n";
		cout << "\t4 Uscita\n";
		cout << "Scelta: ";
		cin >> scelta;
		switch (scelta)
		{
		case 1:
			inserimento(pila);
			break;
		case 2:
			cout << "Quanti elementi vuoi estrarre?\n";
			cin >> n;
			estrazione_stampa(pila, n);
			break;
		case 3:
			cout << "Quanti elementi vuoi riservare?\n";
			cin >> n;
			riserva_memoria_stampa(pila, n);
			break;
		case 4:
			return 0;
		default:
			cout << "Scelta non valida\n";
		}
	}
	return 0;
}