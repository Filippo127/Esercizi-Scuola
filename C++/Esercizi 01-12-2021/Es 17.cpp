/*Dati N numeri calcolare la media aritmetica dei valori pari e quella dei valori dispari.*/
#include <iostream>
using namespace std;

int main() {
	int N;
	int pari = 0;
	int dispari = 0;
	cout << "Inserisci 10 numeri e ti faro' la media tra quelli pari e quelli dispari\n";
	for (int i = 1; i <= 10; i++) {
		cout << "N." << i << ":";
		cin >> N;
		if (N % 2 == 0) {
			pari = pari + N;
			
		}
		else {
			dispari = dispari + N;
		}
	}
	float mediapari = pari / 10;
	float mediadispari = dispari / 10;
	cout << "La media dei tuoi pari e' di " << mediapari << " mentre di quelli dispari e' di " << mediadispari;
	return 0;
}