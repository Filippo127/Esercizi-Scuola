#include <iostream>
using namespace std;

int main(){

	double conto, prelievo, versamento, limite_giornaliero, conto_aggiornato;
	string scelta;
	string versare = "versare";
	string prelevare = "prelevare";
	conto = 6000;
	limite_giornaliero = 250;
	int pin_fisso = 95367;
	int pin;

	cout << "Inserisci il tuo pin per vedere quanti soldi hai e prelevare o versare"<<endl;
	cin >> pin;

	if (pin == pin_fisso){
			cout << "Hai una disponibilità di " << conto << " dimmi se vuoi prelevare o versare" << endl;
			cin >> scelta;
			if (scelta == versare) {
			    cout<< "Quanto desideri depositare?"<< endl;
			    cin>> versamento;
			    conto_aggiornato = conto + versamento;
			    cout<< "Il tuo saldo è di "<< conto_aggiornato << endl;
			    return 0;
			    
			}
			else if (scelta == prelevare) {
			    cout<< "Quanto desideri prelevare?"<< endl;
			    cin>> prelievo;
    			    if (prelievo >= limite_giornaliero){
    			        cout<< "Non puoi prelevare più di 250 € al giorno";
    			    } else {
    			        conto_aggiornato = conto - prelievo;
        			    cout<< "Il tuo saldo è di "<< conto_aggiornato << endl;
        			    return 0;
    			    }
			}
		}
	else {
        cout<< "Il tuo pin è errato. Riprova."<< endl;
	}
}
 