import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        int num, count=1;
        int tempo=0;
        Scanner scanner=new Scanner(System.in);

        for(int i=0; i<4; i++)
        {
            System.out.println("inserisci "+i+" variabile da te desiderata-->");
            num=scanner.nextInt();
            if(tempo==0)
            {
                tempo=num;
            }
            else
            {
                if(tempo==num) count++;
            }
        }
        if(count!=4) System.out.println("Le quattro variabili sono diverse");
        else System.out.println("Le quattro variabili sono uguali!!!");
    }
}