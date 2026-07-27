public class Main
{
    public static void main(String[] args)
    {
        Wallet contoCorrenteBer=new Wallet("Bernardo", 200f);

        contoCorrenteBer.depositare(1000f);
        contoCorrenteBer.preleva(200f);
        System.out.println("Il saldo del tuo conto corrente e'--> "+contoCorrenteBer.dammiSaldo());
    }
}