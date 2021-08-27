//#include <stdio.h>
//
//void main() {
//	
//	printf("출력할내용\n");	//기본출력 : 문자열 출력
//	printf("%d",3);	// 정수형 출력
//}



//#include <stdio.h>
//
//void main()
//{
// //변수의생성 : 자료형 변수명;
//	int a = 20, b = 10, c;
// //변수에 값저장 : 변수명=값;
//	c = a + b;
//	printf("%d+%d=%d\n", a, b, c);
//
//	c = a - b;
//	printf("%d-%d=%d\n", a, b, c);
//
//	printf("%d*%d=%d\n", a, b, a*b);
//
//	printf("%d/%d=%d\n", a, b, a/b);
//}


#include <stdio.h>
void main() {

	int a = 12345;
	float pi = 3.141592;

	printf("a : %d \n", a);
	printf("a : %10d\n", a);
	printf("a : %-10d\n", a);

	printf("pi : %f\n", pi);
	printf("pi : %10.2f\n", pi);
	printf("pi : %3.2f\n", pi);
}