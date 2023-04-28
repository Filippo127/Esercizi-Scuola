using System;
using System
using System.Threading;

class program{

    public static int[] array = new int[100];

    static void Main(string [] args){

        int somma = 0;

        Thread t1 = new Thread(new ThreadStart(Vettore1));
        
        t1.Start();

        Vettore2();

        t1.Join();

        for(int i = 0; i < array.Length; i++){
            somma += array[i];
        }

        Console.WriteLine("La somma è: " + somma);
       
    }
    
    static void Vettore1(){
        for(int i = 0; i < array.Length/2; i++){
            array[i] = new Random().Next(0, 50);
        }
    }
    
    static void Vettore2(){
        for(int i = array.Length/2; i < array.Length; i++){
            array[i] = new Random().Next(0, 50);
        }
    }
}
