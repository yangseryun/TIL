package day05;

import java.util.Scanner;

public class Quiz {
public static void main(String[] args) {
	String q ="Q. ���� �� ���α׷��� �� �ƴ� ����?\n"
			+"1.JAVA\n"
		    +"2.PYTHON\n"
			+"3.C\n"
			+"4.���վ�\n";
	
	Scanner sc = new Scanner(System.in);
	int choice=0;
	int answer=4;
	
	String result=""; 
	
	System.out.print(q);
	choice=sc.nextInt();
	
	result=choice==answer ? "�����Դϴ�":choice>=1 && choice<=4 ? "�����Դϴ�":"??????";
	System.out.println(result);
	}
}
