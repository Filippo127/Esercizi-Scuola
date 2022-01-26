/*Realizzare un programma che ci permette di simulare la classifica di una gara sciistica:
I 10 partecipanti sono individuati attraverso:

1. Il numero della pettorina;
2. Il tempo medio di discesa;

1)Visualizzare il tempo medio di discesa, il tempo di discesa massimo e quello minimo;
2)Visualizzare quanti giocatori hanno realizzato un tempo di discesa inferiore alla media;
3)Dato in input il numero del pettorale, Visualizzare il relativo tempo di discesa;
4)Modificare il tempo di discesa del partecipante con la pettorina n°5;
5)Sostituire il tempo di discesa del partecipante n°4 con quello del partecipante n°3;
6)Attraverso l'utilizzo di un flag segnalare attraverso un output se almeno un partecipante ha
    registrato un tempo di discesa inferiore a 15 secondi e indicarne il numero di pettorina
    e la dicitura "World Record"*/
    
    
#include <iostream>
using namespace std;

int main()
{
    string giocatori[10] = {"Lampa Dario","Sara Cinesca","Cicoria Bagnata","Azzurra La scala","Santo Cervello","Remo Felice","Remo La Barca","Domenica Torno","Ester NATO","Sasso Lino"};
    //i nomi strani sono stati presi dal seguente sito: https://www.nomix.it/nomi-cognomi-strani-assurdi-ridicoli.php
    string n_pettorina[10] = {"55","98","54","15","46","93","78","14","63","69"};

    return 0;
}