#include <iostream>
using namespace std;

int main() {
	double i, ii, iii;
	cout << "Dammi 3 numeri differenti e ti calcoler� il maggiore" << endl;
	cin >> i;
	cin >> ii;
	cin >> iii;
	if (i > ii) {
			if (i > iii) {
				cout << "il numero pi� grande � " << i;
			}
			else {
				cout << "il numero pi� grande �  " << iii;
			}
		}
	else if (ii > iii) {
		cout << "il numero pi� grande � " << ii;
	}
	else
	{
		cout << "il numero pi� grande � " << iii;
	}
	return 0;
}