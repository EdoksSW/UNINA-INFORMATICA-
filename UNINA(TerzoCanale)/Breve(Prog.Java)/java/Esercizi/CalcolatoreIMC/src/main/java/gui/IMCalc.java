package gui;
import modulo.IMC;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class IMCalc
{
    private JPanel jPanel;
    private JTextField txtPeso;
    private JTextField txtAltezza;
    private JButton imc;

    public IMCalc()
    {

        imc.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double peso=Double.parseDouble(txtPeso.getText());
                double altezza=Double.parseDouble(txtAltezza.getText());
                IMC calcIMC=new IMC();
                JOptionPane.showMessageDialog(jPanel, String.format("%.2f", calcIMC.calcoloIMC(peso,altezza)));
            }
        });
    }

    public static void main(String[] args)
    {
        JFrame frame=new JFrame("Calcolatrice");
        frame.setContentPane(new IMCalc().jPanel);
        frame.pack();
        frame.setVisible(true);
    }
}
