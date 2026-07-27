import java.util.Scanner; //1. IMPORTANTE: Senza questo, lo Scanner non esiste!

public class Main
{
    public static void main(String[] args)
    {
        //2. CREIAMO LO SCANNER
        Scanner scanner=new Scanner(System.in);

        System.out.println("Inserisci il primo numero:");
        double num1=scanner.nextInt(); //legge il primo intero

        System.out.println("Inserisci il secondo numero:");
        double num2=scanner.nextInt();
        if((num1+num2)>=100)
        {
            System.out.println("La somma dei due numero è: " + (num1+num2);
            System.out.println("Lo sconto per il prezzo di " + (num1+num2));
            double somma=(double)((num1+num2)*0.9);
        }

        System.out.println(somma);

        scanner.close();
    }
}
