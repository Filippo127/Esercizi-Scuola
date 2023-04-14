public class Main {
    public static void main(String[] args){
        Palazzo palazzo1 = new Palazzo(3, 1000, "Piazza Madrice", 1, "Sommatino");
        Palazzo palazzo2 = new Palazzo(4, 150, "Corso Umberto II", 2, "Santa Rita");
        Palazzo palazzo3 = new Palazzo(5, 200, "Corso Umberto I", 3, "Caltanissetta");
        palazzo1.stampa();
        System.out.println();
        palazzo2.stampa();
        System.out.println();
        palazzo3.stampa();
        System.out.println();
    }
}
