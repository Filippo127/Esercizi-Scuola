#include <iostream>
using namespace std;

int main() {
	double temperatura;
	cout << "Dimmi la temperatura" << endl;
	cin >> temperatura;
	if (temperatura == 0) {
		cout << "La tua temperatura � uguale a zero";
		}
	else if(temperatura <0){
		cout << "La tua temperatura � sotto zero";
		}
	else {
		cout << "La tua temperatura � maggiore a zero";
	}
	return 0;
}