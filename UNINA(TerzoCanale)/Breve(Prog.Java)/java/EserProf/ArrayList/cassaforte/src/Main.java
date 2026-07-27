import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        float num;
        int scelta;
        Scanner scanner=new Scanner(System.in);
        cassaForte cassaforte1=new cassaForte(0);
        System.out.println("Definisci la combinazione della tua cassaforte.");
        cassaforte1.impostaCombinazione(scanner);

        System.out.println("Quali ooperazioni vuoi effettuare?");

        do{
            System.out.println("Opzioni cassaforte: 1->Depositare denaro\n2->Prelevare denaro\n3.Cambiare combinazione\n4. Apertura cassa\n5 Chiusura cassa");
            System.out.println("Selezionare l'operazione->");
            scelta=scanner.nextInt();
            switch (scelta) {
                case 1:
                    System.out.println("Digitare la quantità di denaro da depositare->");
                    num = scanner.nextFloat();
                    cassaforte1.addSoldi(num);
                    break;
                case 2:
                    System.out.println("Digitare la quantità di denaro da prelevare->");
                    num = scanner.nextFloat();
                    cassaforte1.takeSoldi(num);
                    break;
                case 3:
                    cassaforte1.impostaCombinazione(scanner);
                    break;
                case 4:
                    cassaforte1.cassaApertura(scanner);
                    break;
                case 5:
                    if (!cassaforte1.getStato()) {
                        System.out.println("La cassa è già chiusa, non serve farlo di nuovo!");
                    } else {
                        cassaforte1.cassaChiusura();
                    }
                    break;
                default:
                    System.out.println("Questa opzione è inesistente");
                    break;
            }
        }while(scelta!=0);
        if(cassaforte1.getStato()==true)
        {
            System.out.println("La cassa non è stata chiusa\n CHIUSURA AUTOMATICA!!");
            cassaforte1.cassaChiusura();
        }
    }
}