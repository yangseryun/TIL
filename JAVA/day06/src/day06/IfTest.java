package day06;

import java.util.Scanner;

public class IfTest {
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	String n1msg = "ù��° ���� : ";
	String n2msg = "�ι�° ���� : ";
	int num1=0,num2=0;
	
	System.out.println(n1msg);
	num1=sc.nextInt();
	
	System.out.println(n2msg);
	num2=sc.nextInt();

	if(num1>num2) {
		System.out.println("ù��° ������ �� Ů�ϴ�.");
	}
	else if(num1<num2){
		System.out.println("�ι�° ������ �� Ů�ϴ�");
	}
	else {
		System.out.println("�μ��� �����ϴ�.");
	}
}
}
