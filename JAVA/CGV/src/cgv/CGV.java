package cgv;

import javax.swing.JOptionPane;

public class CGV {

	public static void main(String[] args) {
		String hellomsg="�ھ������ CGV�Դϴ�.��\n";
		String menumsg="�翹���ϱ�\n�豸���ϱ�\n������Ʈ ��ȸ\n�곪����\n";
		String agemsg="[û�ҳ� ���� �Ұ� ��ǰ]\n���̸� �Է��ϼ���\n";
		String films ="����̿�ŷ(08:00)\n�轺���̴���(12:00)\n����Ϸ���(23:00)[û�ҳ� ���� �Ұ�]\n��ڷΰ���\n";
		String cook ="������\n���ݶ�\n�����\n��ڷΰ���\n";
		int choice=0, age=0, money=1000000, point=0, t_price=10000;
		int p=0, c_price=3000;
		boolean t_check;
		
		while(true) {
			 t_check=true;
			 
			choice = Integer.parseInt(JOptionPane.showInputDialog(hellomsg+menumsg));
			if(choice==4) break;
			if(!(choice >=1 && choice <=2))continue;
			
			switch(choice) {
			//�����ϱ� ����
			case 1:
				if(money-t_price<0) {
					JOptionPane.showMessageDialog(null, "�ܾ��� �����մϴ�.");
					continue;
				}
				 choice=Integer.parseInt(JOptionPane.showInputDialog(films));
				if(choice==1) {
					JOptionPane.showMessageDialog(null, "���̿�ŷ ���� �Ϸ�(08:00)");
				}
				else if(choice==2) {
					JOptionPane.showMessageDialog(null, "�����̴��� ���� �Ϸ�(12:00)");
				}
				else if(choice ==3) {
					age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
					if(age >20) {
						JOptionPane.showMessageDialog(null, "���Ϸ��� ���� �Ϸ�(23:00)");
					}
					else {
						t_check=false;
						JOptionPane.showMessageDialog(null,"�ٽ� �Է��� �ּ���.");
					}
				}
				else {
					JOptionPane.showMessageDialog(null,"���� �޴��� �̵��մϴ�.");
					continue;
				}
				if(t_check) { //����Ʈ �ڵ� ���
					if(point >0) {
						if(point-t_price>=0) {
							point -=t_price;
						}else {
							money-=(t_price - point);
							point =0;
						}
					}else {
						money-=t_price;
						point +=(int)(t_price * 0.5);
					}
					JOptionPane.showMessageDialog(null, "���� �ܾ� : "+money +"��");
				}
				break;
				//�����ϱ� ����
			case 2:
				switch(choice) {
				case 2:
					if(money-c_price<0) {
						JOptionPane.showMessageDialog(null, "�ܾ��� �����մϴ�.");
						continue;
					}
					 choice=Integer.parseInt(JOptionPane.showInputDialog(cook));
					if(choice==1) {
						JOptionPane.showMessageDialog(null, "���� ���� �Ϸ�");
					}
					else if(choice==2) {
						JOptionPane.showMessageDialog(null, "�ݶ� ���� �Ϸ�");
					}
					else if(choice ==3) {
						age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
						if(age >20) {
							JOptionPane.showMessageDialog(null, "���� ���� �Ϸ�");
						}
						else {
							t_check=false;
							JOptionPane.showMessageDialog(null,"�ٽ� �Է��� �ּ���.");
						}
					}
					else {
						JOptionPane.showMessageDialog(null,"���� �޴��� �̵��մϴ�.");
						continue;
					}
					if(t_check) { //����Ʈ �ڵ� ���
						if(point >0) {
							if(point-c_price>=0) {
								point -=c_price;
							}else {
								money-=(c_price - point);
								point =0;
							}
						}else {
							money-=c_price;
							point +=(int)(c_price * 0.5);
						}
						JOptionPane.showMessageDialog(null, "���� �ܾ� : "+money +"��");
					}
				}
						break;
				//����Ʈ ��ȸ ����
			case 3:
					JOptionPane.showMessageDialog(null, "�ܿ� ����Ʈ : "+p +"��");
				break;
			}
		}
	}
}