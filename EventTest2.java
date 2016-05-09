import java.awt.*;
import java.awt.event.*;
import java.applet.Applet; 
public class EventTest2 extends Applet implements KeyListener{
	boolean specialKeyPressed; 
	String msg;
public void init()
{
	addKeyListener(this);
}
public void paint(Graphics g)
{
	g.drawString(msg,10,20);
}
public void keyPressed(KeyEvent ke)
{
	specialKeyPressed=ke.isShiftDown();
	msg=specialKeyPressed.toString();
}
public void keyReleased(KeyEvent ke)
{
	msg="Key Released";
	repaint();
}
public void keyTyped(KeyEvent ke)
{
	 msg=ke.getKeyChar().toString();
}
}