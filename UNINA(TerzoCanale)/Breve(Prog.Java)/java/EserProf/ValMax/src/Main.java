import java.util.Scanner;
public class Main
{
    static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        int[] nums={1,2,3,4,10,22,40,4,5};
        int temp=0, trovare, trovato=0;
        boolean scan=false;
        temp=nums[0];

        for(int i=0; i< nums.length; i++)
        {
            if(nums[i]>temp) temp=nums[i];
        }
        System.out.println("Il numero maggiore presente nell'array e' "+temp);
        System.out.println("Quale numero vuoi trovare??");
        trovare= scanner.nextInt();
        for(int i=0; i< nums.length;i++)
        {
            if(trovare==nums[i])
            {
                scan=true;
                trovato=i;
                break;
            }
            else scan=false;
        }
        if(scan) System.out.print("IL numero da te cercato è stato trovato e si trova nella posizione->"+trovato);
        else System.out.println("Il numero da te carcato non è presente nell'array");
    }
}