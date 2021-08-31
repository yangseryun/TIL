package cgv;

import javax.swing.JOptionPane;

public class CGV {

	public static void main(String[] args) {
		String hellomsg="★어서오세요 CGV입니다.★\n";
		String menumsg="①예매하기\n②구매하기\n③포인트 조회\n④나가기\n";
		String agemsg="[청소년 구매 불가 상품]\n나이를 입력하세요\n";
		String films ="①라이온킹(08:00)\n②스파이더맨(12:00)\n③사일런스(23:00)[청소년 관람 불가]\n④뒤로가기\n";
		String cook ="①팝콘\n②콜라\n③맥주\n④뒤로가기\n";
		int choice=0, age=0, money=1000000, point=0, t_price=10000;
		int p=0, c_price=3000;
		boolean t_check;
		
		while(true) {
			 t_check=true;
			 
			choice = Integer.parseInt(JOptionPane.showInputDialog(hellomsg+menumsg));
			if(choice==4) break;
			if(!(choice >=1 && choice <=2))continue;
			
			switch(choice) {
			//예매하기 영역
			case 1:
				if(money-t_price<0) {
					JOptionPane.showMessageDialog(null, "잔액이 부족합니다.");
					continue;
				}
				 choice=Integer.parseInt(JOptionPane.showInputDialog(films));
				if(choice==1) {
					JOptionPane.showMessageDialog(null, "라이온킹 예매 완료(08:00)");
				}
				else if(choice==2) {
					JOptionPane.showMessageDialog(null, "스파이더맨 예매 완료(12:00)");
				}
				else if(choice ==3) {
					age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
					if(age >20) {
						JOptionPane.showMessageDialog(null, "사일런스 예매 완료(23:00)");
					}
					else {
						t_check=false;
						JOptionPane.showMessageDialog(null,"다시 입력해 주세요.");
					}
				}
				else {
					JOptionPane.showMessageDialog(null,"메인 메뉴로 이동합니다.");
					continue;
				}
				if(t_check) { //포인트 자동 사용
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
					JOptionPane.showMessageDialog(null, "현재 잔액 : "+money +"원");
				}
				break;
				//구매하기 영역
			case 2:
				switch(choice) {
				case 2:
					if(money-c_price<0) {
						JOptionPane.showMessageDialog(null, "잔액이 부족합니다.");
						continue;
					}
					 choice=Integer.parseInt(JOptionPane.showInputDialog(cook));
					if(choice==1) {
						JOptionPane.showMessageDialog(null, "팝콘 구매 완료");
					}
					else if(choice==2) {
						JOptionPane.showMessageDialog(null, "콜라 구매 완료");
					}
					else if(choice ==3) {
						age = Integer.parseInt(JOptionPane.showInputDialog(agemsg));
						if(age >20) {
							JOptionPane.showMessageDialog(null, "맥주 구매 완료");
						}
						else {
							t_check=false;
							JOptionPane.showMessageDialog(null,"다시 입력해 주세요.");
						}
					}
					else {
						JOptionPane.showMessageDialog(null,"메인 메뉴로 이동합니다.");
						continue;
					}
					if(t_check) { //포인트 자동 사용
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
						JOptionPane.showMessageDialog(null, "현재 잔액 : "+money +"원");
					}
				}
						break;
				//포인트 조회 영역
			case 3:
					JOptionPane.showMessageDialog(null, "잔여 포인트 : "+p +"점");
				break;
			}
		}
	}
}