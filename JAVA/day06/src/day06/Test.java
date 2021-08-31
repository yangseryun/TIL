package day06;

import java.util.Scanner;

public class Test {
public static void main(String[] args) {
	String q="Q. 오늘은 당신의 생일입니다.\n친구에게 상자를 선물로 받았습니다.\n"
			+ "이 상자 안에는 무엇이 들어 있을까요?\n나가기려면 q를 누르세요\n"
			+ "1. 꽃\n"
			+ "2. 손수건\n"
			+ "3. 깜짝상자\n"
			+ "4. 보석\n";
		String answer1 = "꽃 : 당신은 거짓말을 못해서 안합니다.";
	String answer2 = "손수건 : 당신은 정직한 사람입니다.";
	String answer3 = "깜짝 상자 : 당신은 눈 하나 깜짝 안하고 거짓말을 합니다";
	String answer4 = "보석 : 당신은 때에 따라 가끔씪 거짓말을 합니다.";
	
	Scanner sc = new Scanner(System.in);
	
	String choice="";
	

	
//	if(choice ==1) {
//		System.out.println(answer1);
//	}
//	
//	else if(Choice==2) {
//		System.out.println(answer2);
//	}
//	
//	else if(Choice==3) {
//		System.out.println(answer3);
//	}
//	
//	else if(Choice==4) {
//		System.out.println(answer4);
//	}
//	else {
//		System.out.println(???????);
//	}
	while(true) {
		System.out.println(q);
	choice = sc.next();
	
	if(choice.equals("q")) {
		System.out.println("종료");
		break;
	}
	switch(choice) {
	case "1":
		System.out.println(answer1);
		break;
	case "2":
		System.out.println(answer2);
		break;
	case "3":
		System.out.println(answer3);
		break;
	case "4":
		System.out.println(answer4);
		break;
	default:
			System.out.println("???????");
		
	}
	}
}
}
