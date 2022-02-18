/*

Realizzare un programma in c++ che permetta di registrare in una tabella bidimensionale i nomi e i cognomi dei clienti di un'azienda (6 clienti); 
Effettuare le seguenti manipolazioni: 

1. Visualizzare il contenuto dell'elemento (3;2); (fatto)
2. Visualizzare il contenuto dell'elemento le cui coordinate vengono date in input; (fatto)
3. Visualizzare la posizione di un cognome dato in input; (fatto)
4. Visualizzare nome e cognome di tutti i clienti che si chiamano con un nome dato in input; (fatto)
5. Modificare il cognome e il nome di un elemento la cui posizione è data in input;

*/

#include <iostream>
#include <unistd.h>
using namespace std;

int main ()
{

  string clienti[6][2];
  for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << ") Inserisci il cognome del cliente: ";
        cin >> clienti[i][0];
        cout << i + 1 << ") Inserisci il nome del cliente: ";
        cin >> clienti[i][1];
    cout<<endl;
    }
    
    sleep(5);
    system ("clear");
    
    cout<<clienti [3] [2];
    
    sleep(5);
    system ("clear");
    
    int coordinate2_1, coordinate2_2; 
    cout<<"Inserisci prima coordinata";
    cin>> coordinate2_1;
    cout<<"Inserisci seconda coordinata";
    cin>> coordinate2_2;
    cout<<clienti [coordinate2_1] [coordinate2_2];
    
    sleep(5);
    system ("clear");
    
    string cognome;
    cout<<"Inserisci un cognome";
    cin>> cognome;
    for (int i = 0; i<6; i++){
        if(clienti[i][1] == cognome){
            cout <<i<<1;
            break;
        }
    }
    
    sleep(5);
    system ("clear");
    
    string nome;
    cout<<"Inserisci un nome";
    cin>> nome;
    for (int i = 0; i<6; i++){
        if(clienti[i][1] == nome){
            cout << clienti [i][0] << " " << clienti[i][1];
        }
    }
    
    sleep(5);
    system ("clear");
    
     string nome1, cognome1, scelta;
    cout<<"Inserisci un nome";
    cin>> nome1;
    cout<<"Inserisci un cognome";
    cin>> cognome1;
    for (int i = 0; i<6; i++){
        if(clienti[i][1] == nome && clienti[i][0] == cognome){
            cin>> scelta;
            clienti[i][1] = scelta;
            cin>> scelta;
            clienti[i][0] = scelta;
        }
    }

    
    
    
    
    return 0;



}