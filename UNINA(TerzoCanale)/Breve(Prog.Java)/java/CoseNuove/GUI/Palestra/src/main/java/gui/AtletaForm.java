package gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import model.Atleta;

public class AtletaForm {
    private JPanel mainPanel;
    private JTextField txtNome;
    private JTextField txtCognome;
    private JButton bntSalva;

    public AtletaForm() {

        bntSalva.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                //1. Leggiamo i dati dai campi di testod
                String nome = txtNome.getText();
                String cognome = txtCognome.getText();

                //2. Creiamo l'oggetto Entity (Atleta)
                Atleta alteta = new Atleta(nome, cognome);

                //3.Facciamo qualcosa (per ora stampiamo in colese)
                System.out.println("Atleta creato: " + alteta);

                //Messaggio di conferma per l'utente
                JOptionPane.showMessageDialog(mainPanel, "Alteta salvato con successo!");
            }
        });
    }

    // Metodo per avviare la finestra (Standard Java)
    public static void main(String[] args)
    {
        JFrame frame=new JFrame("Nuovo Atelta");
        frame.setContentPane(new AtletaForm().mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}
