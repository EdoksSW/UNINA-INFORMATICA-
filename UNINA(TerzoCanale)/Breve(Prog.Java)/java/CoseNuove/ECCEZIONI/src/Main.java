import java.util.Scanner;
import java.util.InputMismatchException;


public class Main
{
    public static void main(String[] args)
    {
        int num;
        try(Scanner scanner=new Scanner(System.in))
        {
            System.out.println("Inserisci la tua età");
            num=scanner.nextInt();
        }
        catch(InputMismatchException e)
        {
            System.out.println("Se ho chiesto un NUMERO!!");
        }

    }
}