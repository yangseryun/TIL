package day09;

import java.util.Scanner;

public class ArShop {
	public static void main(String[] args) {
		int arIncome[]=new int[3];
		String []arName = {"������", "�ڿ�����", "����"};
		Scanner sc = new Scanner(System.in);
		int sum=0;
		int cnt=0;
		double avg = 0.0;
		String best="����";
		
		for(int i=0;i<arIncome.length;i++) {
			System.out.print(arName[i]+"������� �Է��ϼ��� (���� : �鸸��)\n");
			arIncome[i]=sc.nextInt();
			sum+=arIncome[i];
		}
		
		avg = Double.parseDouble(String.format("%.2f",(double)sum/arIncome.length));
		System.out.println("�� ����� : "+sum+"�鸸��");
		System.out.println("��� ����� : "+avg+"�鸸��");
		
		for(int i=0;i<arIncome.length;i++) {
			if(arIncome[i]>avg) {
				cnt++;
				if(cnt==1) {
					best ="";
				}
				best +=arName[i]+"\n";
			}
		}
		System.out.println("���μ�Ƽ�� �����\n"+best);
		
	}
}
