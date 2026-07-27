import java.util.ArrayList;

public class Main
{
    public static void main(String[] args)
    {
        //ArrayList --> array ridimensionabile
        //              Gli elementi possono essere aggiunti e rimossi dopo la fase di compilazione
        //              memorizza dati di tipo riferimento
        ArrayList<String> food= new ArrayList<String>();

        food.add("pizza");
        food.add("hamburger");
        food.add("hotdog");

        food.set(0, "sushi"); //possiamo settare un elemento ad un indice a nostra scelta
        food.remove(2);
        food.clear();

        for(int i=0; i<food.size();i++)
        {
            System.out.println(food.get(i));
        }
    }
}