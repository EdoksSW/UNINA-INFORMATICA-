import java.util.Scanner;

public class Main
{
  public static void main(String[] args)
  {
    Scanner scanner=new Scanner(System.in);
    System.out.println("inserisci numero");
    int num=scanner.nextInt();

    if((num%2)==0) System.out.println("Il numero è pari");
    else System.out.println("IL numero è dispari");

  }
}