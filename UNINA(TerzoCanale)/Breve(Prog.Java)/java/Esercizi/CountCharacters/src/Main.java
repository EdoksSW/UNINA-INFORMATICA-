import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        int spazi=0, lettere=0, numeri=0, simb=0;
        String speciali=".,?!;:@#£$%&&/()=[]{}+-_";
        Scanner scanner=new Scanner(System.in);
        System.out.println("Inserisci uan frase a piacere tuo con numeri e lettere");
        String frase=scanner.nextLine();

        for(int i=0; i<frase.length(); i++)
        {
            //lettura lettere
            if((frase.charAt(i)>='a' && frase.charAt(i)<='z') || (frase.charAt(i)>='A' && frase.charAt(i)<='Z')) lettere++;
            else if(frase.charAt(i)>='0' && frase.charAt(i)<='9') numeri ++;
            else if(speciali.indexOf(frase.charAt(i)) != -1) simb++;
            else spazi++;
        }
        System.out.println("Spazi-> "+ spazi);
        System.out.println("Lettere-> "+lettere);
        System.out.println("Numeri-> "+ numeri);
        System.out.println("Speciali--> "+ simb);
    }
}