package model;

public class Snack extends Prodotto
{
    boolean dolce=false;

    public boolean isDolce() {
        return dolce;
    }

    public void setDolce(boolean dolce) {
        this.dolce = dolce;
    }

    public Snack(String nome, String prezzo, String codice, boolean dolce) {
        super(nome, prezzo, codice);
        this.dolce = dolce;
    }
}
