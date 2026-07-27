package gui;

import modello.Istruttore;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Registrazione {
    public JPanel mainPanel;

    private JTextField txtNome;
    private JTextField txtCognome;
    private JTextField txtsPecializzazione;

    private JButton sfidaButton;

    //1. La JList e il JScrollPane con nomi chiari (coerenti con il disegnatore)
    private JList<Istruttore> listIstruttori;
    private JScrollPane scrollPaneIstruttori; //Questo contiene la JLIst nel disegnatore

    //2. DICHIARO IL MODELLO (Il vero motore della lista)
    private DefaultListModel<Istruttore> listModel;


    public Registrazione() {
        // 3. INIZIALIZZIAMO IL MODELLO E LO AGGANCIAMO ALLA JLIST
            //1.Crei l'oggetto
        listModel=new DefaultListModel<>();
            // 2. Passi alla JList
        listIstruttori.setModel(listModel);
        listModel.addElement(new Istruttore("Alessandro", "Conte", "Crosstraining / Crossfit"));
        listModel.addElement(new Istruttore("Valeria", "Marini", "Pilates & Yoga"));
        listModel.addElement(new Istruttore("Roberto", "Gallo", "Bodybuilding & Powerlifting"));
        listModel.addElement(new Istruttore("Elena", "Rizzo", "Zumba e Step"));
        listModel.addElement(new Istruttore("Marco", "Ferrari", "Preparazione Atletica"));
        listModel.addElement(new Istruttore("Giulia", "Bianchi", "Ginnastica Posturale"));
        listModel.addElement(new Istruttore("Davide", "Serra", "Calisthenics"));
        listModel.addElement(new Istruttore("Sofia", "Leone", "Spinning"));
        listModel.addElement(new Istruttore("Antonio", "Bruno", "Arti Marziali / Kickboxing"));
        listModel.addElement(new Istruttore("Chiara", "Vitale", "Nutrizione e Personal Training"));
        listModel.addElement(new Istruttore("Federico", "Greco", "Sala Pesi"));
        listModel.addElement(new Istruttore("Martina", "De Luca", "Acquagym"));
        listModel.addElement(new Istruttore("Stefano", "Pari", "Functional Training"));
        listModel.addElement(new Istruttore("Francesca", "Villa", "Stretching & Mobilità"));
        listModel.addElement(new Istruttore("Luca", "Fontana", "Kettlebell Training"));
        sfidaButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String nome=txtNome.getText();
                String cognome=txtCognome.getText();
                String specializzazione=txtsPecializzazione.getText();

                Istruttore istruttore=new Istruttore(nome, cognome,specializzazione);
                listModel.addElement(istruttore);

                String message="Istruttore creato con successoo\n "+ istruttore;

                JOptionPane.showMessageDialog(mainPanel, message);
            }
        });
    }


}
