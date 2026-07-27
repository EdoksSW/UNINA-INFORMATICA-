public class Studente extends Persona
{
    private int matricola;
    private String università;

    public Studente(String nome, String Cognome, String CodiceFiscale, int matricola, String università) {
        super(nome, Cognome, CodiceFiscale);
        this.matricola=matricola;
        this.università=università;
    }

    @Override
    public String toString() {
        return "Nome:"+nome+"\nCognome="+cognome+"\nCF="+CodiceFiscale+"\nUniversità="+università+"\nMatricola="+matricola;
    }

}
