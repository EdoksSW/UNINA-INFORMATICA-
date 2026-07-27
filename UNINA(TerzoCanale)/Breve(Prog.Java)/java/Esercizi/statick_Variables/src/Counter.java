public class Counter
{
    static int count=0;
    public Counter()
    {
        count++;
    }
    public static void printCount()
    {
        System.out.println("Contatore->"+count);
    }
}
