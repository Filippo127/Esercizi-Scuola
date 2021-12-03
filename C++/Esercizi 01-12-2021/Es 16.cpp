/*Dati N numeri calcolare la media aritmetica.*/
#include <iostream>
using namespace std;

int main() {
	int N;
	int N1 = 0;
	cout << "Inserisci 10 numeri e ti faro' la somma sia positivi che negativi\n";
	for (int i = 1; i <= 10; i++) {
		cout << "N." << i << ":";
		cin >> N;
		N1 = N1 + N;
	}
	float media = N1 / 10;
	cout << "La tua media e' di " << media;
	return 0;
}