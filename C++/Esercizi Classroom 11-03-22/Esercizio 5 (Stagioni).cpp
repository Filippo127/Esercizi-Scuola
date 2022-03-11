/*Scrivere un programma che riceve in input un numero intero  e stampa “pari” se  ∈ {0,2,4}, “dispari” se  ∈ {1,3,5}, altrimenti “altro”.*/

#include <iostream>
using namespace std;


int main() {

	int mese;
	int giorno;

	cout << "Inserisci un mese" << endl;
	cin >> mese;

	switch (mese) {
	case 12:
		cout << "Inserisci giorno\n";
		cin >> giorno;
		if (giorno < 21) {
			cout << "Autunno";
		}
		else cout << "Inverno";
		break;

	case 1:
	case 2:
		cout << "Inverno";
		break;
	case 3: 
		cout << "Inserisci giorno\n";
		cin >> giorno;
		if (giorno < 21) {
			cout << "Inverno";
		}
		else{ cout << "Primavera";
		break;
		}
	case 4:
	case 5:
		cout << "Primavera";
		break;

	case 6:
		cout << "Inserisci giorno\n";
		cin >> giorno;
		if (giorno < 21) {
			cout << "Primavera";
		}
		else { cout << "Estate"; }
		break;

	case 7:
	case 8:
		cout << "Estate";
	
	case 9:
		cout << "Inserisci giorno\n";
		cin >> giorno;
		if (giorno < 21) {
			cout << "Estate";
		}
		else { cout << "Autunno"; }

	case 10:
	case 11:
		cout << "Autunno";
		break;
		

	default:
		cout << "Hai sbagliato, riprova!";
	}

	return 0;

}

