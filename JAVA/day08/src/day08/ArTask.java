package day08;

public class ArTask {
public static void main(String[] args) {
	int arnum[]= new int[5];
	int arnum2[]= new int[10];
	for(int i=0;i<arnum.length;i++) {
		arnum[i]=i+1;
	}
	for(int i=0;i<arnum.length;i++) {
		System.out.println(arnum[i]);
	}
	
	System.out.println("\n");
	
	for(int i=0;i<arnum2.length;i++) {
		arnum2[i]=10-i;
		System.out.println(arnum2[i]);
	}
}
}
