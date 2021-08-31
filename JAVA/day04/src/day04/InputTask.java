package day04;

import java.util.Scanner;

//next를 사용해서 동시에 2개의 값을 입력받고 더한 값을 출력하기

public class InputTask {
public static void main(String[] args) {
	int num1=0,num2=0;
	Scanner sc=new Scanner(System.in);
	
	System.out.println("정수 2개를 차례로 입력하세요.");
	num1=Integer.parseInt(sc.next());
	num2=Integer.parseInt(sc.next());

	System.out.println("결과 :"+(num1+num2));
}
}
