package day09;

import java.util.Scanner;

public class ArTest {
	public static void main(String[] args) {
		int [] ho=new int[3];
		Scanner sc = new Scanner(System.in);
		int sum=0;
		double avg =0.0;
		
		for(int i=0;i<ho.length;i++) {
			System.out.println(i+1+"ȣ ������ �Է��ϼ���(���� : ����)");
			ho[i]=sc.nextInt();
			sum +=ho[i];
		}
		System.out.println("�� ���� : "+sum+"����");
		avg=(double)sum/ ho.length;
		//System.out.printf("��� ���� :%.2f����",avg);
		avg=Double.parseDouble(String.format("%.2f",(double)sum/ho.length));
		System.out.println("��� ���� : "+avg+"����");
	
	}
}
