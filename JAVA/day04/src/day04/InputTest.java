package day04;

import java.util.Scanner;

public class InputTest {
public static void main(String[] args) {
	int num1=0,num2=0;
	
	Scanner sc=new Scanner(System.in);
	
	System.out.print("ù��° ���� : ");
	num1=sc.nextInt();
	System.out.print("�ι�° ���� : ");
	num2=sc.nextInt();
	
	System.out.println("ù��° ���� :"+num1);
	System.out.println("�ι�° ���� :"+num2);
	
	System.out.println(num1+num2);
	}
}