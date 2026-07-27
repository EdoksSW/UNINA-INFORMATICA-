package controller;

import model.Prodotto;

import java.util.ArrayList;

public class Controller
{
    private ArrayList<Prodotto> prodottiDisponibili;

    public Controller()
    {
        this.prodottiDisponibili=new ArrayList<>();
    }

    public ArrayList<Prodotto> getProdottiDisponibili() {
        return prodottiDisponibili;
    }

    public void setProdottiDisponibili(ArrayList<Prodotto> prodottiDisponibili) {
        this.prodottiDisponibili = prodottiDisponibili;
    }

    public void aggiungiProdotto(Prodotto daAggiungere)
    {
        prodottiDisponibili.add(daAggiungere);
    }

    public void creaFintiProdotti()
    {

    }
}
