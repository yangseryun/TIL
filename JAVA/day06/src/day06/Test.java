package day06;

import java.util.Scanner;

public class Test {
public static void main(String[] args) {
	String q="Q. ������ ����� �����Դϴ�.\nģ������ ���ڸ� ������ �޾ҽ��ϴ�.\n"
			+ "�� ���� �ȿ��� ������ ��� �������?\n��������� q�� ��������\n"
			+ "1. ��\n"
			+ "2. �ռ���\n"
			+ "3. ��¦����\n"
			+ "4. ����\n";
		String answer1 = "�� : ����� �������� ���ؼ� ���մϴ�.";
	String answer2 = "�ռ��� : ����� ������ ����Դϴ�.";
	String answer3 = "��¦ ���� : ����� �� �ϳ� ��¦ ���ϰ� �������� �մϴ�";
	String answer4 = "���� : ����� ���� ���� ������ �������� �մϴ�.";
	
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
		System.out.println("����");
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
