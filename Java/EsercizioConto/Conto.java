import java.util.Scanner;

public class Conto {
    Scanner input = new Scanner(System.in);
    public int saldo;
    public String iban;
    public String nome;
    public String cognome;
    public String dataNascita;

    public Conto(String nome, String cognome, String dataNascita, int saldo, String iban){
        this.nome = nome;
        this.cognome = cognome;
        this.dataNascita = dataNascita;
        this.saldo = saldo;
        this.iban = iban;
    }

    public void showData(){
        System.out.println("Il suo nome è: " + nome + ".");
        System.out.println("Il suo cognome è: " + cognome + ".");
        System.out.println("La sua data di nascita è: " + dataNascita + ".");
        System.out.println("Il suo conto è di: " + saldo + " euro.");
        System.out.println("Il suo iban è: " + iban + ".");
}

    public void depositoCC (){
        System.out.println("Quanto vuole depositare?");
        int deposito = input.nextInt();
        saldo += deposito;
    }

    public void prelievoCC(){
        System.out.println("Quanto vuole prelevare?");
        int prelievo = input.nextInt();
        saldo -= prelievo;

    }

    public String getIban() {
        return iban;
    }
}