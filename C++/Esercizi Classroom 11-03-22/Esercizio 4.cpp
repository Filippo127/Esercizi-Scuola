/*Scrivere un programma che riceve in ingresso un mese (numero intero) e stampa quanti giorni ha quel mese.*/

#include <iostream>
using namespace std;


int main() {

	int mese;

	cout << "Inserisci il numero di un mese";
		cin >> mese;

	switch (mese) {
	case 1:
		cout << "Gennaio ha 31 giorni";
		break;
	case 2: 
		cout << "Febbraio ha 28 giorni";
		break;
	case 3:
		cout << "Marzo ha 31 giorni";
		break;
	case 4:
		cout << "Aprile ha 30 giorni";
		break;
	case 5:
		cout << "Maggio ha 31 giorni";
		break;
	case 6:
		cout << "Giugno ha 30 giorni";
		break;
	case 7:
		cout << "Luglio ha 31 giorni";
		break;
	case 8:
		cout << "Agosto ha 31 giorni";
		break;
	case 9:
		cout << "Settembre ha 30 giorni";
		break;
	case 10:
		cout << "Ottobre ha 31 giorni";
		break;
	case 11:
		cout << "Novembre ha 30 giorni";
		break;
	case 12:
		cout << "Dicembre ha 31 giorni";
		break;

	default:
		cout << "L'opzione selezionata non � corretta";
	}

	return 0;

}

