//#include <stdio.h>
//void main() {
//
//	int a = 1, b = 2;
//	printf("a&b=%d\n", a & b);
//	printf("a|b=%d\n", a | b);
//	printf("a^b=%d\n", a ^ b);
//	printf("~a=%d\n",~a);
//}



#include <stdio.h>
void main() {
	int a = 10, b = 20;

	//조건 ? 참일때 값:거짓일때 값
	a >= b ? printf("%d", a) : printf("%d", b);
}