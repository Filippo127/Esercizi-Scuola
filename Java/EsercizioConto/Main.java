import java.util.Scanner;

public class Main {
        public static Scanner input = new Scanner(System.in);

        static Conto[] conti = {new Conto( "Emanuele", "Roccaro", "30/03/2005", 27764, "IT33Q0300203280612543457523"),
                                new Conto( "Filippo", "Caio", "12/07/2005", 88678, "IT02X0300203280747732267696"),
                                new Conto( "Giorgio", "Puzzangara", "04/01/2006", 23786, "IT14Z0300203280514824256475")};

            
        public static void clearScreen() {  
        System.out.print("\033[H\033[2J");  
        System.out.flush();  
        }

        public static void trasferimentoCC(){
            System.out.println("Qual'è il suo iban?");
            String verificaIban = input.next();
            System.out.println("Qual'è l'iban del destinatario?");
            String verificaIban2 = input.next();

            int posIban1 = 0, posIban2 = 0;

            for(int i = 0; i < conti.length; i++){
                if(conti[i].getIban().equals(verificaIban)){
                    posIban1 = i;
                }
                if(conti[i].getIban().equals(verificaIban2)){
                    posIban2 = i;
                }
            }

            System.out.println("Quanto vuole trasferire?");
            int trasferimento = input.nextInt();
            if(trasferimento > conti[posIban1].saldo){
                System.out.println("Non hai abbastanza Credito");
            } else {
                conti[posIban1].saldo -= trasferimento;
                conti[posIban2].saldo += trasferimento;
            }
            
        }
        public static void main(String[] args){

            while(true){
                System.out.println("Scegli un utente: ");
                System.out.println("1. Emanuele Roccaro");
                System.out.println("2. Filippo Caio");
                System.out.println("3. Giorgio Puzzangara");
                System.out.println("4. Esci");
                int scelta = input.nextInt();
                clearScreen();

                if (scelta == 1){
                    System.out.println("Scegli un opzione: ");
                    System.out.println("1. Deposito.");
                    System.out.println("2. Prelievo.");
                    System.out.println("3. Trasferisci fondi.");
                    System.out.println("4. Dati.");
                    System.out.println("5. Esci.");
                    scelta = input.nextInt();
                    clearScreen();

                    if (scelta == 1){
                        conti[0].depositoCC();
                        clearScreen();
                    }

                    else if (scelta == 2){
                        conti[0].prelievoCC();
                        clearScreen();
                    }

                    else if (scelta == 3){
                        trasferimentoCC();
                        clearScreen();
                    }

                    else if (scelta == 4){
                        conti[0].showData();
                    }

                    else if (scelta == 5){
                        break;
                    }

                }
                else if(scelta == 2){
                    System.out.println("Scegli un opzione: ");
                    System.out.println("1. Deposito.");
                    System.out.println("2. Prelievo.");
                    System.out.println("3. Trasferisci fondi.");
                    System.out.println("4. Dati.");
                    System.out.println("5. Esci.");
                    scelta = input.nextInt();
                    clearScreen();

                    if (scelta == 1){
                        conti[1].depositoCC();
                        clearScreen();
                    }

                    else if (scelta == 2){
                        conti[1].prelievoCC();
                        clearScreen();
                    }

                    else if (scelta == 3){
                        trasferimentoCC();
                        clearScreen();
                    }

                    else if (scelta == 4){
                        conti[1].showData();
                    }

                    else if (scelta == 5){
                        break;
                    }
                }
                else if(scelta == 3){
                    System.out.println("Scegli un opzione: ");
                    System.out.println("1. Deposito.");
                    System.out.println("2. Prelievo.");
                    System.out.println("3. Trasferisci fondi.");
                    System.out.println("4. Dati.");
                    System.out.println("5. Esci.");
                    scelta = input.nextInt();
                    clearScreen();

                    if (scelta == 1){
                        conti[2].depositoCC();
                        clearScreen();
                    }

                    else if (scelta == 2){
                        conti[2].prelievoCC();
                        clearScreen();
                    }

                    else if (scelta == 3){
                        trasferimentoCC();
                        clearScreen();
                    }

                    else if (scelta == 4){
                        conti[2].showData();
                    }

                    else if (scelta == 5){
                        break;
                    }
                    
                }
                else if(scelta == 4){
                    break;
                }
                else{
                    System.out.println("Scelta non valida");
                }
        }
            }
}