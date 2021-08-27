//#include <stdio.h>
//int main() {
//
//	int a;
//
//	printf("%p\n", &a);	//&변수명 : 변수의 주소
//
//}



//#include <stdio.h>
//void main() {
//
//	int* pa;		//저장할 주소의 변수 : 자료형이 int 형
//	float* pb;		//저장할 주소의 변수 : 자료형이 float 형
//	char* pc;
//	long* pd;
//	double* pe;
//
//	printf("sizeof(*pa)=%d\n", sizeof(pa));
//	printf("sizeof(*pb)=%d\n", sizeof(pb));
//	printf("sizeof(*pc)=%d\n", sizeof(pc));
//	printf("sizeof(*pd)=%d\n", sizeof(pd));
//	printf("sizeof(*pe)=%d\n", sizeof(pe));
//	//포인터변수는 모두 4byte 크기를 가진다
//}




#include <stdio.h>
int main() {

	int a = 10;
	int* pa; //정수형 포인터 //주소의 변수 : 자료형이 정수형
	pa = &a;

	printf("a=%d\n", a);
	printf("*pa=%d\n", *pa); //간접참조연산자, 주소로 접근해 저장된 값을 가져오는 방법

	printf("&a=%p\n", &a);
	printf("&pa=%p\n", &pa); //포인터변수 pa의 주소
	printf("pa=%p\n", pa);	//포인터변수 pa의 값 == a변수의 주소
	printf("&*pa=%p\n",&*pa); //포인터변수 pa로 접근한 값(*)의 주소(&)

}