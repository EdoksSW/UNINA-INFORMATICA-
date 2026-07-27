public class Dipendente extends Persona
{
    private int annoDiAssunzione;
    private float stipendio;

    public Dipendente(String nome, String Cognome, String CodiceFiscale, int annoDiAssunzione, float stipendio) {
        super(nome, Cognome, CodiceFiscale);
        this.annoDiAssunzione=annoDiAssunzione;
        this.stipendio=stipendio;
    }

    @Override
    public String toString() {
        return "Nome="+nome+"\nCognome="+cognome+"\nCF="+CodiceFiscale+"\nAnno Di assunzione="+annoDiAssunzione+"\nStipensio="+stipendio;
    }

    float getStipendio()
    {
        return this.stipendio;
    }

    public boolean guadagnaPiudi(Dipendente dipendente)
    {
        if(this.stipendio>dipendente.getStipendio())
        {
            return true;
        } else return false;
    }
}
