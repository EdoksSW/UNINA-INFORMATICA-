package model;

import java.util.Objects;

public class Prodotto
{
    private String nome, prezzo, codice;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setPrezzo(String prezzo) {
        this.prezzo = prezzo;
    }

    public void setCodice(String codice) {
        this.codice = codice;
    }

    public String getNome() {
        return nome;
    }

    public String getPrezzo() {
        return prezzo;
    }

    public String getCodice() {
        return codice;
    }

    public Prodotto(String nome, String precco, String codice) {
        this.nome = nome;
        this.prezzo = precco;
        this.codice = codice;
    }

    @Override
    public String toString() {
        return "Prodotto{" +
                "nome='" + nome + '\'' +
                ", precco='" + prezzo + '\'' +
                ", codice='" + codice + '\'' +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Prodotto prodotto = (Prodotto) o;
        return Objects.equals(codice, prodotto.codice);
    }

    @Override
    public int hashCode() {
        return Objects.hash(nome, prezzo, codice);
    }
}
