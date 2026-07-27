package modulo;

public class Atleta
{
    String nome, cognome, specializzazione;

    public Atleta(String nome, String cognome, String specializzazione) {
        this.nome = nome;
        this.cognome = cognome;
        this.specializzazione = specializzazione;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public String getSpecializzazione() {
        return specializzazione;
    }

    public void setSpecializzazione(String specializzazione) {
        this.specializzazione = specializzazione;
    }

    @Override
    public String toString() {
        return "Atleta{" +
                "nome='" + nome + '\'' +
                ", cognome='" + cognome + '\'' +
                ", specializzazione='" + specializzazione + '\'' +
                '}';
    }
}
