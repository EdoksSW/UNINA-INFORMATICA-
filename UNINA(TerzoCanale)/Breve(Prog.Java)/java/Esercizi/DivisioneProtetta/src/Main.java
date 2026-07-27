import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        int num, div;
        System.out.println("Inserire prima i numeri da dividere");
        System.out.println("Numero->");
        num=scanner.nextInt();
        System.out.println("Per cosa lo vuoi dividere?->");
        div=scanner.nextInt();
        try{
            float risutlato=faiDivisione(num,div);
            System.out.println("Risultato-->"+risutlato);
        }
        catch (ArithmeticException e){
            System.out.println("ERRORE CATTURATO NEL MAIN-->"+e.getMessage());
        }
    }

    public static int faiDivisione(int num, int div) throws ArithmeticException {
        try {
            int divisione = num / div;
            System.out.println("Divisione: " + divisione);
            return divisione;
        }
        catch(ArithmeticException e)
        {
            throw new ArithmeticException("Il numero non può essere diviso per 0!");
        }
    }
}