/* Un agenzia di viaggi effettua le prenotazioni per i voli della compagnia Rapisardi airlines
che applica delle tariffe standard per le seguenti destinazioni:
1. Catania-Roma 30€;
2. Catania-Praga 55€;
3. Catania-New York 400€.

Al momento della prenotazione il cliente dovrà indicare il numero di passeggeri da prenotare e
l'eventuale supplemento del bagaglio in stiva che corrisponde a €20 per le destinazioni europee
e di 50€ per i voli intercontinentali.
Nel mese di novembre l'agenzia applica uno sconto del 10% se il costo della prenotazione se il
costo complessivo è superiore a 500€. 
Sul costo della prenotazione bisognerà calcolare le imposte di imbarco del 10% per destinazioni
europee e 17% per destinazioni intercontinentali. Visualizzare il totale netto: (
Totale lordo
Biglietti,
bagaglio,
imposta meno lo sconto,
il messaggio "sconto d'autunno" se è stato applicato
lo sconto)
Il programma dovrà prevedere il controllo dell'input in maniera tale che non possano essere inseriti
codici di destinazioni diversi da quelli prestabiliti.
Se il cliente ha bagagli in stiva visualizzare il messaggio "recarsi per il check in allo
sportello 8" */


#include <iostream>
using namespace std;

int main () {
    const int supplemento_eu = 20, supplemento_int = 50;
    const int CTA_RMN = 30, CTA_PR = 55, CTA_NY = 400;
    const int impostaCTA_RMN = 30 * 10 / 100, impostaCTA_PR = 55 * 10 / 100, impostaCTA_NY = 400 * 17 / 100;
    const string Catania_Roma = "01", Catania_Praga = "02", Catania_New_York = "03";
    string mese;
    

    
    bool flag = false;
    while (flag == false) {
        cout<<"Benvenuto/a nella Rapisardi airlines \u2708 \n \n";
        int passeggeri;
        string volo;
        cout<< "Selezionare Il volo da lei desiderato \n \n";
        cout<< "01 Catania-Roma \n";
        cout<< "02 Catania-Praga \n";
        cout<< "03 Catania-New York \n \n";
    
        cin>> volo;
        cout<< "Selezionare il numero di passeggeri \n \n";
        cin>> passeggeri;
    }
    

    
    cout<<"Digitare il numero del mese della partenza";
    if (mese == "Novembre" ) {
        cout<< "Hai diritto allo sconto d'autunno";

    } else {
        cout<<"\n";
    }
    
    
    
    
    
    
    
    
}