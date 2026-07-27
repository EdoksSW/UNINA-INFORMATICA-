package gui;
import modulo.Atleta;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Registrazione {
    private JTextField nome;
    private JTextField cognome;
    private JTextField specializzazione;
    private JButton registra;
    private JPanel mainPanel;

    public JPanel getMainPanel() {
        return mainPanel;
    }


    public Registrazione() {
        registra.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String txtNome= nome.getText();
                String txtCognome=cognome.getText();
                String txtSpecializzazione=specializzazione.getText();
                Atleta atleta=new Atleta(txtNome,txtCognome,txtSpecializzazione);
                System.out.println("Nuovo atleta è stato creato\n"+atleta);

                JOptionPane.showMessageDialog(mainPanel, atleta);
            }
        });
    }
}
