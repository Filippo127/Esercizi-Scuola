//Questo è un programma che simula la funzione di un ATM con due account, ti permette di prelevare, versare, vedere i soldi sul conto e uscire dal programma.//
//Io sono lo studente Daniel Ippolito//
//In collaborazione con Filippo Pio Caio//
//Github:DanielIppo//
//Github:Filippo127//

#include <iostream>
using namespace std;

int atm() {//In questa funzione vado a stampare una scritta che compare in cima al programma, esso ha solo scopo estetico
	cout << ":::::::::::::::::\n";
	cout << ":::::  ATM  :::::\n";
	cout << ":::::::::::::::::\n\n";
	return 0;
}

int chose_user1() {//Questa funzione invece determina le operazioni del primo account, come il suo budget. Questa funzione potrebbe venire chiamata più tardi.
	double bill_user1 = 60000;//Qua stabiliamo varie variabili e una costante che ci serviranno più tardi.
	const int limit = 1500;
	string chose;
	int import;
	cout << "Dimmi ora che vuoi fare:\n\n" << "Prelevare\n\n" << "Versare\n\n" << "Info sul conto\n\n" << "uscire\n\n";
	cin >> chose;
	if (chose == "prelevare") {//In questo if con i vari else if verifichiamo l'azione scelta dall'utente e la mettiamo in pratica
		system("cls");
		atm();
		cout << "\n\nQuanto vuoi prelevare?\n\n";
		cin >> import;
		if (import <= limit) {
			bill_user1 = bill_user1 - import;
			cout << "\n\nIl tuo conto è stato aggiornato. Ora hai " << bill_user1 << " cosa desideri fare ora ? \n\n";
			chose_user1();
			atm();
		}
		else {
			cout << "\n\nNon puoi eseguire l'operazione il limite è di 1500 €, riprova\n\n";
			system("cls");
			chose_user1();
			atm();
		}
	}
	else if (chose == "versare") {
		system("cls");
		atm();
		cout << "\n\nQuanto vuoi versare?\n\n";
		cin >> import;
		if (import <= limit) {
			bill_user1 = bill_user1 + import;
			cout << "\n\nPerfetto ora nel tuo conto hai " << bill_user1 << " € che desideri fare?";
			chose_user1();
			atm();
		}
		else {
			cout << "\n\nNon puoi eseguire l'operazione il limite è di 1500 €, riprova\n\n";
			chose_user1();
		}
	}
	else if (chose == "info") {
		system("cls");
		atm();
		cout << "\n\nNel tuo conto hai " << bill_user1 << "€, dimmi ora cosa vuoi fare\n\n";

		chose_user1();
		atm();
	}
	else if (chose == "uscire") {
		system("cls");

	}
	else {
		system("cls");
		atm();
		cout << "\n\nPotresti aver sbagliato, riprova\n\n";
		chose_user1();
		atm();
	}
	return 0;
}

int chose_user2() {//Questa condizione è identica a quella del primo utente, solo che serve per il secondo, e anche questa potrà essere richiamata più tardi
	double bill_user2 = 600000;
	const int limit = 2500;
	string chose;
	int import;
	cout << "Dimmi ora che vuoi fare:\n\n" << "Prelevare\n\n" << "Versare\n\n" << "Info sul conto\n\n" << "uscire\n\n";
	cin >> chose;
	if (chose == "prelevare") {
		cout << "Quanto vuoi prelevare?\n\n";
		cin >> import;
		if (import <= limit) {
			bill_user2 = bill_user2 - import;
			cout << "Il tuo conto è stato aggiornato. Ora hai " << bill_user2 << " cosa desideri fare ora ? \n\n";
			chose_user2();
		}
		else {
			cout << "Non puoi eseguire l'operazione il limite è di 2500 €, riprova\n";
			chose_user2();
		}
	}
	else if (chose == "versare") {
		cout << "Quanto vuoi versare?\n\n";
		cin >> import;
		if (import <= limit) {
			bill_user2 = bill_user2 + import;
			cout << "Il tuo conto è stato aggiornato. Ora hai " << bill_user2 << " cosa desideri fare ora ? \n\n";
			chose_user2();
		}
		else {
			cout << "Non puoi eseguire l'operazione il limite è di 2500 €, riprova\n";
			chose_user2();
		}
	}
	else if (chose == "info") {
		cout << "Nel tuo conto hai " << bill_user2 << "€, dimmi ora cosa vuoi fare\n\n";
		chose_user2();
	}
	else if (chose == "uscire") {
		system("cls");

	}
	else {
		cout << "Potresti aver sbagliato, riprova\n";
		chose_user2();
	}
	return 0;
}

int main() {//Qua abbiamo la funzione principale, quella dove verifichiamo che utente viene scelto e in base ciò chiamiamo le funzioni scritte in precedenza.
	const string user1 = "Simona";//Qua ho dichiarato sotto forma di stringa costante i nomi dei due utenti
	const string user2 = "Stefano";
	const int pin1 = 90102;//Mentre qua sotto forma di interi costanti ho dichiarato i pin dei due account
	const int pin2 = 60890;
	atm();//In questa riga ho chiamato la prima funzione scritta, in modo che stampi a schermo quel motivetto 
	string users;
	int pin;
	cout << "\n\nScegli l'utente\n \n \n";
	cin >> users;
	cout << "\n\nOra digita la password dell'utente\n\n\n";
	cin >> pin;
	if (users == user1 && pin == pin1) {//Ora con l'if verifico i dati inseriti dal'utente, come username e pin, e se entrambi sono come le credenziali da me scelte per l'utente uno e richiama le funzioni necessarire
		system("cls");
		atm();
		chose_user1();
	}
	else if (users == user2 && pin == pin2) {//Mentre qua controlla se i dati inseriti corrispondono al secondo utente, e anch'esso richiama le funzioni necessarie
		system("cls");
		atm();
		chose_user2();
	}
	else {
		system("cls");
		cout << "Potresti avere sbagliato a digitare l'utente o la password, riprova\n\n";
		main();

	}
	return 0;
}