#include <iostream>
using namespace std;

int main() {
	int numero;
	cout << "Dimmi un numero e ti dir� se � divisore di 36" << endl;
	cin >> numero;
	if (36 % numero == 0) {
		cout << "Il tuonumero � divisore di 36";
		}
	else {
		cout << "Il tuo numero non � divisore di 36";
	}
	return 0;
}