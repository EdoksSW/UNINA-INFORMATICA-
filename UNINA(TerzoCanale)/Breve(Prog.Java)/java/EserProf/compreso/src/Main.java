import java.util.Scanner;

public class Main
{
  public static void main(String[] args)
  {
    Scanner scanner=new Scanner(System.in);
    System.out.println("inserisci primo numero");
    int num1= scanner.nextInt();

    if(num1>50 && num1<80) System.out.println("Il numero è compreso");
    else System.out.println("Il numero non è compreso");
  }
}