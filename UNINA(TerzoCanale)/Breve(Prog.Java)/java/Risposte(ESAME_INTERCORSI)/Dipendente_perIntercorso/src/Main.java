public class Main
{
    public static void main(String[] args)
    {
        // Istanza 1: Un dipendente con esperienza
        Dipendente min = new Dipendente("Mario", "Rossi", "RSSMRA80A01H501W", 2010, 2500.50f);

        // Istanza 2: Un neo-assunto
        Dipendente mid = new Dipendente("Giulia", "Bianchi", "BNCHGL95P41L219Z", 2023, 1800.00f);

        // Istanza 3: Un quadro/dirigente
        Dipendente max = new Dipendente("Luca", "Verdi", "VRDLUC75T12F205M", 2005, 3200.75f);

        Dipendente temp;

        if(min.guadagnaPiudi(mid))
        {
            temp=mid;
            mid=min;
            min=temp;
            if(mid.guadagnaPiudi(max))
            {
                temp=max;
                max=mid;
                mid=max;
            }
        }
        else
        {
            if(min.guadagnaPiudi(max))
            {
                temp=max;
                max=mid;
                mid=temp;
            }
            else if(mid.guadagnaPiudi(max))
            {
                temp=max;
                max=mid;
                mid=max;
            }
        }
        System.out.println("min->"+min+"\n\nmid->"+mid+"\n\nmax->"+max);

    }
}