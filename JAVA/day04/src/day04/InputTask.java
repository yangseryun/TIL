package day04;

import java.util.Scanner;

//next�� ����ؼ� ���ÿ� 2���� ���� �Է¹ް� ���� ���� ����ϱ�

public class InputTask {
public static void main(String[] args) {
	int num1=0,num2=0;
	Scanner sc=new Scanner(System.in);
	
	System.out.println("���� 2���� ���ʷ� �Է��ϼ���.");
	num1=Integer.parseInt(sc.next());
	num2=Integer.parseInt(sc.next());

	System.out.println("��� :"+(num1+num2));
}
}
