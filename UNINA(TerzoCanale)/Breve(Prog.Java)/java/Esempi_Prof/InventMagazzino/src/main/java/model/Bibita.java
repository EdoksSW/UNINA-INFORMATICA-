package model;

public class Bibita extends Prodotto
{
    String colore;
    boolean frizzante=false;

    public String getColore() {
        return colore;
    }

    public void setColore(String colore) {
        this.colore = colore;
    }

    public boolean isFrizzante() {
        return frizzante;
    }

    public void setFrizzante(boolean frizzante) {
        this.frizzante = frizzante;
    }

    public Bibita(String nome, String prezzo, String codice, String colore, boolean frizzante) {
        super(nome, prezzo, codice);
        this.colore = colore;
        this.frizzante = frizzante;
    }
}
