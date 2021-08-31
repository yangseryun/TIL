package day09;

import java.util.Scanner;

public class ArTest {
	public static void main(String[] args) {
		int [] ho=new int[3];
		Scanner sc = new Scanner(System.in);
		int sum=0;
		double avg =0.0;
		
		for(int i=0;i<ho.length;i++) {
			System.out.println(i+1+"호 월세를 입력하세요(단위 : 만원)");
			ho[i]=sc.nextInt();
			sum +=ho[i];
		}
		System.out.println("총 월세 : "+sum+"만원");
		avg=(double)sum/ ho.length;
		//System.out.printf("평균 월세 :%.2f만원",avg);
		avg=Double.parseDouble(String.format("%.2f",(double)sum/ho.length));
		System.out.println("평균 월세 : "+avg+"만원");
	
	}
}
