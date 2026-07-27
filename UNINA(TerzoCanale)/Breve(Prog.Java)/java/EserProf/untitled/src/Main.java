import javax.swing.plaf.basic.BasicInternalFrameTitlePane;
import java.util.ArrayList;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        int n, nTrovato=0;
        ArrayList interi=new ArrayList<Integer>();
        boolean trovato=false;

        System.out.println("inserire il numero di interi che vuoi inserire");
        Scanner scanner=new Scanner(System.in);
        n= scanner.nextInt();

        for(int i=0; i<n;i++) interi.add(scanner.nextInt());

        System.out.println("Quale numero vuoi trovare dentro questa lista?");
        n= scanner.nextInt();

        nTrovato= interi.indexOf(n);
        if(nTrovato!=-1)
        {
            System.out.println("il numero è stato trovare nella posizione "+(nTrovato+1)+"\n");
            System.out.println("Numero cercato-->"+interi.get(nTrovato));
        }else System.out.println("Il numero non è stato trovato");
    }
}