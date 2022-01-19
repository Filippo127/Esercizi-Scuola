/* Implementare un programma che rappresenti un conto corrente bancario. Il conto corrente conserva i seguenti:

1. Nome, cognome, data di nascita, saldo del conto, data di apertura del conto, codice fiscale dell'intestatario;
2. Nome della banca;

Il conto ha le seguenti funzionalità: 

1. Visualizza conto (in cui vengono visualizzate le caratteristiche sopra elencate);
2. Versa importo;
3. Prelievo importo;

Il programma è dotato di un menù che consente all'utente di scegliere una delle precedenti opzioni*/


#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
using namespace std;

void Clear(){
    #if _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

string CustomSeparatorWithText(string symbol, string text, int length = 10) {
    string center, text1, text2, text3, lati, sym;
    int length2;

    sym = symbol;

    int tex = text.length();

    for (int i = 1; i < tex+2 + length; i++) {
        symbol = symbol + sym;
    }

    text1 = symbol + "\n";
    length2 = length/2-0;

    for (int i = 0; i < length2; i++) {
        lati = lati + sym;
    }

    text3 = symbol + "\n" + lati + " " + text + " " + lati + "\n" + symbol + "\n";
    return text3;
}

string Login[2] = {"DanielIppolito", "875645"};
string Dati[5] = {"Daniel", "Ippolito", "27/11/2005", "19/01/2022", "PPLDNL05S27B429W"};
double saldo = 1000000000.00;
string username, password, scelta;

class Conto{
    public:
    
    void Home(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Home")<< "\n\n";
        cout << "Che operazione vorresti effettuare?\n\n"<< "1)Prelievo\n\n2)Versamento\n\n3)Info Conto";
    }
    
    void login(){
        cout << CustomSeparatorWithText("#", "Rapisardi Bank Login")<<"\n\n";
        cout << "Inserisci il tuo nome Username\n\n";
        cin >> username;
        cout << "\n\nOra inserisci la tua password\n\n";
        cin >> password;
        verifica_login(username, password);
    }
    
    void verifica_login(string username, string password){
        if (Login[0].length() == username.length() && Login[1].length() == password.length() && Login[0] == username && Login[1] == password){
            Clear();
            Home();
        } else {
            Clear();
            cout << CustomSeparatorWithText("#", "Rapisardi Bank Login")<<"\n\n";
            cout << "Hai sbagliato a digitare qualcosa, reinserisci i dati\n\n";
            sleep(5);
            Clear();
            login();
        }
    }
    
    
};
Conto conto;
int main(){
    conto.login();
}