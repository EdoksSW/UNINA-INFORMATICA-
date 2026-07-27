package gui;

import controller.Controller;
import model.Prodotto;

import javax.swing.*;
import java.util.ArrayList;

public class DistributoreHome
{
    private JPanel mainPaner;
    private JComboBox listaProdotti;
    public JButtonw
    Controller controller;

    public static void main(String[] args)
    {

    }

    public DistributoreHome()
    {
        controller=new Controller();
        controller.creaFintiProdotti();

        ArrayList<Prodotto> prodottiDisponibili= controller.getProdottiDisponibili();
        for(Prodotto p: prodottiDisponibili)
        {
            listaProdotti.addItem(p);
        }
    }
}
