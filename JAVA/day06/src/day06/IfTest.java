package day06;

import java.util.Scanner;

public class IfTest {
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	String n1msg = "첫번째 정수 : ";
	String n2msg = "두번째 정수 : ";
	int num1=0,num2=0;
	
	System.out.println(n1msg);
	num1=sc.nextInt();
	
	System.out.println(n2msg);
	num2=sc.nextInt();

	if(num1>num2) {
		System.out.println("첫번째 정수가 더 큽니다.");
	}
	else if(num1<num2){
		System.out.println("두번째 정수가 더 큽니다");
	}
	else {
		System.out.println("두수가 같습니다.");
	}
}
}
