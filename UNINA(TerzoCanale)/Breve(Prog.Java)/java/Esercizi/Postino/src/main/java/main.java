import java.util.Scanner;
import javax.swing.*;
import javax.xml.crypto.dsig.spec.XSLTTransformParameterSpec;
import gui.Registrazione;

public class main
{
    public static void main(String[] args)
    {
        JFrame frame=new JFrame("Reg");
        Registrazione registrazione=new Registrazione();

        frame.setContentPane(registrazione.mainPanel);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

    }
}
