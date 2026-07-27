public class Docente extends Persona
{
    private float salario;
    private String materia;

    public Docente(String nome, String Cognome, String CodiceFiscale, String materia, float salario) {
        super(nome, Cognome, CodiceFiscale);
        this.materia=materia;
        this.salario=salario;
    }


    @Override
    public String toString() {
        return "Nome:"+nome+"\nCognome="+cognome+"\nCF="+CodiceFiscale+"\nmateria="+materia+"\nSalario="+salario;
    }
}
