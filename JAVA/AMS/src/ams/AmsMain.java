package ams;

import javax.swing.ImageIcon;
import javax.swing.JOptionPane;

public class AmsMain {
	public static void main(String[] args) {
		
		ImageIcon img = new ImageIcon("src/img/main.gif");		
		
		String [] menu = {"�߰��ϱ�","�˻��ϱ�","�����ϱ�","�����ϱ�","��Ϻ���"};
		
		JOptionPane.showOptionDialog(null, "AMS �׽�Ʈ", "AMS", "JOptionPane.DEFAULT_OPTION", "JOptionPane.PLAIN_MESSAGE", img, menu, null);
	}
}
