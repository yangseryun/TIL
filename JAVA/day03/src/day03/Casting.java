package day03;

public class Casting {
	public static void main(String[] args) {
		
		String num1="1";
		String num2="2";
		int num3=3;
		
		//자동 형변환
		System.out.println(11/9);
		System.out.println(11/9.0);
		
		//강제 형변환
		System.out.println((double)11/9);
		System.out.println((int)8.43+2.59);
		System.out.println((int)(8.43+2.59));
		System.out.println((int)8.43+(int)2.59);
		
		//문자열 형변환
		System.out.println(Integer.parseInt(num1)+Integer.parseInt(num2));
		System.out.println(""+num3+9);
	}
}
