package day06;

import java.util.Scanner;

public class Film {
public static void main(String[] args) {
	String q="밥먹으러 갈래?\n"
			+ "1.아니\n"
			+ "2.그래\n"
			+ "3.이미 먹었어\n"
			+ "4.뭐 먹으러 갈까?";
	Scanner sc = new Scanner(System.in);
	int choice =0;
	
	switch(choice) {
	case 1:
		System.out.println("그래");
		System.out.println("게임 오버");
		break;
	case 2:
		System.out.println("넌 너무 쉬워 잘가");
		System.out.println("게임 오버");
		break;
	case 3:
		System.out.println("게임 오버");
		break;
	case 4:
		System.out.println("떡볶이 먹으러 가자");
		break;
	default:
	System.out.println("그게 무슨 말이야?");
	System.out.println("게임 오버");
	}
	
}
}
