/*
 Memorizzare in un array bidimensionale 10 x 10 la tavola pitagorica,
 quella delle tabelline, e stampare il contenuto della matrice (nella prima riga
 si dovrà trovare la tabellina del 1: 1 2 3 4 5 6 7 8 9 10).
*/

#include <iostream>
#include <time.h>
using namespace std;

int main ()
{

  int Random_number[10000];
  int n_zeri;
  srand(time(NULL));
  
  for(int i = 0; i<10000; i++){
      Random_number[i] = rand() % 10;
      cout << Random_number [i] << endl;
      if (Random_number[i] == 0){n_zeri++;}
  }
    
    cout << "\nHai " << n_zeri << " Zeri!!";
    


  return 0;



}