package ams;

import javax.swing.ImageIcon;
import javax.swing.JOptionPane;

public class AmsMain {
	public static void main(String[] args) {
		
		ImageIcon img = new ImageIcon("src/img/main.gif");		
		
		String [] menu = {"추가하기","검색하기","수정하기","삭제하기","목록보기"};
		
		JOptionPane.showOptionDialog(null, "AMS 테스트", "AMS", "JOptionPane.DEFAULT_OPTION", "JOptionPane.PLAIN_MESSAGE", img, menu, null);
	}
}
