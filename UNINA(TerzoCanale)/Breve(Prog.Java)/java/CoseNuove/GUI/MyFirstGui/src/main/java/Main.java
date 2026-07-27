import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main extends JFrame
{

    private JLabel jsFirstName;
    private JTextField textField1;
    private JButton clickMeButton;
    private JPanel MainPanel;

    public Main()
    {
        setContentPane(MainPanel);
        setTitle("Simple Gui App");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(300,300);
        setLocationRelativeTo(null);
        setVisible(true);
        clickMeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String firstName = textField1.getText();
                JOptionPane.showMessageDialog(Main.this, "Welcome: "+ firstName);
            }
        });
    }

    static void main(String[] args) {
        new Main();
    }
}
