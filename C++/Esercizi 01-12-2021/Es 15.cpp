/*Determinare la somma dei numeri negativi e positivi di un insieme di N numeri relativi.*/
#include <iostream>
using namespace std;

int main() {
	int N;
	int relativi = 0;
	cout << "Inserisci 10 numeri e ti faro' la somma sia positivi che negativi\n";
	for(int i = 1; i <= 10; i++){
		cout << "N." << i << ":";
		cin >> N;
		relativi = relativi + N;
	}
	cout << "La tua somma e' di " << relativi;
	return 0;
}