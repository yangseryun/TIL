package day03;

public class Variable {
public static void main(String[] args) {
		int i=10;
		long l=100L;
		double d1=1.23;
		double d2=1.23;
		float f=1.23F;
		char c='A';
		String s="¾ç¼¼·Ã";
		
//		System.out.println(i);
//		System.out.println(l);
//		System.out.println(d1);
//		System.out.println(d2);
//		System.out.println(f);
//		System.out.println(c);
//		System.out.println(s);
		
		System.out.printf("%d\n",i);
		System.out.printf("%o\n",i);
		System.out.printf("%x\n",i);
		System.out.printf("%d\n",l);
		System.out.printf("%f\n",d1);
		System.out.printf("%.2f\n",f);
		System.out.printf("%c\n",c);
		System.out.printf("%s\n",s);
	}
}
