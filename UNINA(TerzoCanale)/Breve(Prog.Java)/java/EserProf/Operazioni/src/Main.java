import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        int num2;
        Scanner scanner=new Scanner(System.in);

        System.out.println("Inserisci primo numero");
        int num1=scanner.nextInt();
        System.out.println("Inserisci secondo numero");
        num2=scanner.nextInt();

        System.out.println("Inserisci l'operazione che vuoi eseguire");

        scanner.nextLine(); //libero il buffer

        String swi=scanner.nextLine();

        switch (swi)
        {
            case "+": //somma
                System.out.println(num1+"+"+num2+"="+(num1+num2));
                break;
            case "-":
                System.out.println(num1+"-"+num2+"="+(num1-num2));
                break;
            case "x":
                System.out.println(num1+"x"+num2+"="+(num1*num2));
                break;
            case ":":
                System.out.println(num1+":"+num2+"="+(num1/num2));
                break;
            default:
            System.out.println("Questa operazione non esiste!!!");
            break;
        }
    }
}