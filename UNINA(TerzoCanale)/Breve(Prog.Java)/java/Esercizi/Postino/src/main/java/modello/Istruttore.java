package modello;

public class Istruttore
{
    private String nome, cognome, specializzazione;

    public Istruttore(String nome, String cognome, String specializzazione) {
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
        return "nome=" + nome + '\n' +
                "Cognome=" + cognome + '\n' +
                "specializzazione=" + specializzazione;
    }
}
