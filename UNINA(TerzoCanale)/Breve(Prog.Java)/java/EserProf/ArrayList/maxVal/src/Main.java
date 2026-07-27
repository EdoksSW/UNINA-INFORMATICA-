
import java.util.ArrayList;
import java.util.List;

public class Main
{
    public static void main(String[] args)
    {
        ArrayList<Integer> interi=new ArrayList<>(List.of(1,2,3,4,100,9,10));
        int max=interi.get(0);
        for(int i=0; i<interi.size();i++)
        {
            if(max<interi.get(i))
            {
                max=interi.get(i);
            }
        }

        System.out.println("Valore massimo è->"+max);
    }
}