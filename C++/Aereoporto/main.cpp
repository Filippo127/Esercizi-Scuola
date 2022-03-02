/*
Realizzare un programma che permetta di gestire il traffico aereo di un aeroporto. In particolare ci saranno 6 vettori per registrare:
codice del volo; (fatto)
compagnia aerea; (fatto)
partenza o arrivo (se è un aereo in arrivo o in partenza); (fatto)
orario (di partenza o di arrivo);
stato (partito o arrivato);
Città;
Temuto conto che nel vettore partenza o arrivo dovrà contenere un codice in cui contenuto potrà essere P o A; 
il vettore relativo allo stato potrà contenere i seguenti codici: D= Departured, L= landed, C= Canceled, B= Boarding, S= Scheduled.
Visualizzare:
le informazioni di un determinato volo dato in input;
codice volo, Città, orario, voli dove lo stato è B;
Visualizzare le informazioni dei voli in partenza per una città data in input
Dato in input (?) l'orario attuale/ acquisito l'orario di sistema visualizzare i voli il cui orario programmato è superato e non è ancora atterrato/partito e modicarlo in D.
*/

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    string choose; 
    string airline [5] = {"Ryanair", "Delta Airlines", "Vueling", "ITA airways", "Alitalia"};
    string flight_n [5] = {"FR 06885", "DL1099", "VY 06534", "IT 88184", "AZ 01746"};
    string departes_arrives [5] = {"P", "P", "A", "A", "P"};
    string city [5] = {"Katowice", "Minneapolis", "Barcelona", "Roma", "Milano"};
    string status [5] = {"D","D","L","L","D"};
    int arrival_h [5] = {15, 14, 18, 22, 11};
    int arrival_m [5] = {30, 45, 15, 00, 20};
    int landing_h [5] = {17, 16, 21, 01, 12};
    int landing_m [5] = {00, 30, 30, 13, 20};
    
    
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int hour = aTime->tm_hour;
    int minutes = aTime->tm_min;
    
    
    cout<<"--------------------------------------------------------------------------------------";
    cout<<"---------------------Welcome to the Civil Aviation Administration---------------------";
    cout<<"--------------------------------------------------------------------------------------";
    cout<<"\n";
    cout<<"\n";
    cout<<"1. Visualizzare Informazioni di un volo ";
    cout<<"2. Visualizzare informazioni voli in partenza";
    cout<<"3. VIsualizzare i voli in imbarco";
    
    if (choose == "1") {
        cout<<"Di che volo vuole informazioni?";
        cin>> 
    }
    
    

    return 0;
}
