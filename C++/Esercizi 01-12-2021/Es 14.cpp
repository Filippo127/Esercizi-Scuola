/*Dati N numeri stampare la somma di quelli pari e di quelli dispari.*/
#include <iostream>
using namespace std;

int main() {
	int N;
	int pari = 0;
	int dispari = 0;
	cout << "Inserisci 10 numeri e ti faro' la somma di quelli pari e di quelli dispari\n";
	for(int i = 1; i <=10; i++) {
		cout << "N." << i << ":";
		cin >> N;
		if (N % 2 == 0) {
			pari = pari + N;
		}
		else {
			dispari = dispari + N;
		}
	}
	cout << "La somma dei tuoi pari e' di " << pari << " mentre di quelli dispari e' di " << dispari;
	return 0;
}