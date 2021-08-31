package day10;

public class MethodTest {
	
	int add(int num1,int num2){
		System.out.println("add메서드 입니다.");
		return num1+num2;
	}
	
	public static void main(String[] args) {
//		System.out.println(add(3,7));
		MethodTest m=new MethodTest();
		System.out.println(m.add(5, 7));
		
	}
}
