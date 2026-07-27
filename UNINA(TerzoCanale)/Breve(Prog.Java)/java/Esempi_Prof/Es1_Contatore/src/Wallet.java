public class Wallet
{
    private String intestatario;
    private float saldo;

    public Wallet(String intestatario, float saldo)/*-->Costruttore serve a istanziare la classe e avere un ogetto su cui lavorare*/
    {
        this.saldo=saldo;
        this.intestatario=intestatario;
    }
    public void depositare(float quantitaDaDepositare)
    {
        saldo+=quantitaDaDepositare;
    }
    public void preleva(float quantitaDaPrelevare)
    {
        saldo-=quantitaDaPrelevare;
    }
    public float dammiSaldo()
    {
        return saldo;
    }
}
