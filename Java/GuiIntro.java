import javax.swing.JOptionPane;

public class GuiIntro {
    
    public static void main(String[] args) {
        
        String name=JOptionPane.showInputDialog("Enter your name");
        JOptionPane.showMessageDialog(null, "Hello"+name);

        int age= Integer.parseInt(JOptionPane.showInputDialog("Enter your age"));
        JOptionPane.showMessageDialog(null, "you are \t " +age+ "  years old");

        Double Height= Double.parseDouble(JOptionPane.showInputDialog("Enter your Height"));
        JOptionPane.showMessageDialog(null, "you are \t " +Height+ " Cm ");
        
    }
}
