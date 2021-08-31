package day04;

import java.util.Scanner;

public class InputTest2 {
public static void main(String[] args) {
	Scanner sc =new Scanner(System.in);
	System.out.println("나이를 입력하세요");
	sc.nextInt();
	System.out.println("이름을 입력하세요");
	sc.nextLine(); //enter용
	sc.nextLine();
}
}
