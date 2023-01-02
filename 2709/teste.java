import java.awt.*;
import javax.swing.*;

class SwirlingMilk extends JFrame {
    public SwirlingMilk() {
        // Set the title and size of the frame
        setTitle("Swirling Milk Experiment");
        setSize(400, 400);

        // Create a panel and set its background color
        JPanel panel = new JPanel();
        panel.setBackground(Color.WHITE);

        // Add the panel to the frame
        add(panel);

        // Set the frame to be visible
        setVisible(true);
    }

    public void paint(Graphics g) {
        // Call the superclass's paint method
        super.paint(g);

        // Get the dimensions of the panel
        int width = getWidth();
        int height = getHeight();

        // Set the starting values for the ellipse's position, radius, and opacity
        int x = width / 2;
        int y = height / 2;
        int radius = 10;
        int opacity = 255;

        // Set the color of the ellipse to a semi-transparent black
        g.setColor(new Color(0, 0, 0, opacity));

        // Draw a series of ellipses with increasing radii and decreasing opacities
        for (int i = 0; i < 25; i++) {
            g.fillOval(x - radius, y - radius, radius * 2, radius * 2);
            radius += 10;
            opacity -= 10;
            g.setColor(new Color(0, 0, 0, opacity));
        }
    }

    public static void main(String[] args) {
        // Create a new instance of the SwirlingMilk class
        SwirlingMilk swirlingMilk = new SwirlingMilk();
    }
}