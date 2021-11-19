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
    int supplemento_eu = 20, supplemento_int = 50;
    int CTA_RMN = 30, CTA_PR = 55, CTA_NY = 400;
    int impostaCTA_RMN = 30 * 10 / 100, impostaCTA_PR = 55 * 10 / 100, impostaCTA_NY = 400 * 17 / 100;
    int totale1, totale2, totale3;
    int totale_lordo1, totale_lordo2, totale_lordo3;
    
    

    
    bool flag = false;
    int mese;
    int bagagli;
    int sconto1 = totale_lordo1 - totale_lordo1*10/100;
    int sconto2 = totale_lordo2 - totale_lordo2*10/100;
    int sconto3 = totale_lordo3 - totale_lordo3*10/100;
    string departure_date;
    while (flag == false) {
        flag = false;
        cout<<"\n Benvenuto/a nella Rapisardi airlines \u2708 \n \n";
        int passeggeri;
        int volo;
        cout<< "Selezionare Il volo da lei desiderato \n \n";
        cout<< "1. Catania-Roma \n";
        cout<< "2. Catania-Praga \n";
        cout<< "3. Catania-New York \n \n";
        
        cout<<"Seleziona un volo: ";
        cin>>volo;
        
        if (volo == 1) {
            cout<<"Selezionare la data di partenza (DD/MM/YYYY) \n \n";
            cin>>departure_date;
            cout<<"Selezionare il numero di passeggeri:  \n";
            cin>> passeggeri;
            cout<<"Selezionare il numero di bagagli da stiva: ";
            cin>>bagagli;
            cout<<"In che mese ti trovi al momento della prenotazione (MM) \n \n";
            cin>>mese;
            if (mese==11) {
            cout<<"Hai diritto allo sconto d'autunno \n \n";
        }
            totale_lordo1= CTA_RMN * passeggeri + impostaCTA_RMN + supplemento_eu * bagagli;
            if (totale_lordo1 >= 500) {
                totale_lordo1 = totale_lordo1-sconto1;
            }
            totale1 = totale_lordo1;
            cout<<"Il tuo totale è di:"<< totale1;
            flag=true;
            
            
            
        } else if (volo == 2) {
            cout<<"Selezionare la data di partenza (DD/MM/YYYY) \n \n";
            cin>>departure_date;
            cout<<"Selezionare il numero di passeggeri:  \n";
            cin>> passeggeri;
            cout<<"Selezionare il numero di bagagli da stiva: ";
            cin>>bagagli;
            cout<<"In che mese ti trovi al momento della prenotazione (MM) \n \n";
            cin>>mese;
            if (mese==11) {
            cout<<"Hai diritto allo sconto d'autunno \n \n";
        }
            totale_lordo2= CTA_PR * passeggeri + impostaCTA_PR + supplemento_eu * bagagli;
            if (totale_lordo2 >= 500) {
                totale_lordo2 = totale_lordo2-sconto2;
            }
            totale2 = totale_lordo2;
            cout<<"Il tuo totale è di:"<< totale2;
            flag=true;
        
        } else if (volo == 3) {
            cout<<"Selezionare la data di partenza (DD/MM/YYYY) \n \n";
            cin>>departure_date;
            cout<<"Selezionare il numero di passeggeri:  \n";
            cin>> passeggeri;
            cout<<"Selezionare il numero di bagagli da stiva: ";
            cin>>bagagli;
            cout<<"In che mese ti trovi al momento della prenotazione (MM) \n \n";
            cin>>mese;
            if (mese==11) {
            cout<<"Hai diritto allo sconto d'autunno \n \n";
        }
            totale_lordo3= CTA_NY * passeggeri + impostaCTA_NY + supplemento_int * bagagli;
            if (totale_lordo3 >= 500) {
                totale_lordo3 = totale_lordo3-sconto3;
            }
            totale3 = totale_lordo3;
            cout<<"Il tuo totale è di: "<< totale3 <<" €"; 
            flag=true;
            
        } else {
            cout<<"\nScelta non valida!\n";
            flag = true;
        }
    }
    
    return 0;
}


