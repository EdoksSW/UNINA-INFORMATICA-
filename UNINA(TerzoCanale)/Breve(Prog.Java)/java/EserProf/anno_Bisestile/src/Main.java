import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        int anno;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Inserisci un anno a tuo piacere");
        anno=scanner.nextInt();

        if((anno % 4==0 || anno % 400==0) && anno%100!=0) System.out.println("L'anno "+anno+" è bisestile");
        else System.out.println("L'anno non è bisestile");


    }
}