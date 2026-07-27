import javax.swing.*;
import gui.Registrazione;

public class Main
{
    public static void main (String[] args)
    {
        JFrame frame=new JFrame("RegistrazioneAtleta");
        Registrazione registrazione=new Registrazione();
        frame.setSize(400,300);
        frame.setContentPane(registrazione.getMainPanel());
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
