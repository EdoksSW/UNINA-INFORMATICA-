import java.util.InputMismatchException;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        int[] voti=new int[3];

        for(int i=0; i<voti.length; i++)
        {
            try
            {
                System.out.println("inserire "+ (i+1) + " voto");
                int voto= scanner.nextInt();
                if(voto<18 || voto>30)
                {
                    throw new IllegalArgumentException("Voto fuori range (18-30)");
                }
            }
            catch (InputMismatchException e)
            {
                System.out.println("Hai inserito un testo, non un nuemro!!");
                i--;
            }
            catch(IllegalArgumentException e)
            {
                System.out.println("ERRORE LOGICO: "+ e.getMessage());
                i--;
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("Fuori indice: Array pieno");
                break;
            }
        }
    }
}