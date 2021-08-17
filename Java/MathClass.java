import javax.swing.JOptionPane;
public class MathClass {
    public static void main(String[] args) {
        Double a;
        Double b;
        Double c;
        a=Double.parseDouble( JOptionPane.showInputDialog(null, "Enter the value of a"));
        b=Double.parseDouble( JOptionPane.showInputDialog(null, "Enter the value of b"));
        c=Math.sqrt((a*a)+(b*b));
        JOptionPane.showMessageDialog(null, "The result is :"+c+"cm");
    }
}
