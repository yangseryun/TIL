//#include <stdio.h>
//void main() {
//
//	int* p1 = 1000;
//	int* p2 = 1000;
//	
//	printf("연산전 p1 : %d, p2 : %d\n", p1, p2);
//	p1++;
//	p2--;
//
//	printf("연산후 p1 : %d, p2 : %d\n", p1, p2);
//}




//#include <stdio.h>
//int main() {
//
//	int* pi = 1000;
//	float* pf = 1000;
//	double* pd = 1000;
//	char* pc = 1000;
//
//	pi++; 
//	pf++;
//	pd++;
//	pc++;
//	printf("pi : %d\n", pi);
//	printf("pf : %d\n", pf);
//	printf("pd : %d\n", pd);
//	printf("pc : %d\n", pc);
//
//}


#include <stdio.h>
int main() {

	int x = 100;
	int* px = &x;
	//초기값 출력
	printf("x=%d\n", x);
	printf("&x=%d\n", &x);
	printf("*px=%d\n", *px);
	printf("px=%d\n", px);
	printf("\n");

	//1)px++
	px++;
	printf("x=%d\n", x);
	printf("&x=%d\n", &x);
	printf("*px=%d\n", *px);
	printf("px=%d\n", px);
	printf("\n");

	//2)*px++
	px = &x;
	printf("x=%d\n", x);
	printf("&x=%d\n", &x);
	printf("*px=%d\n", *px);
	printf("*px++=%d\n", *px++);
	printf("px=%d\n", px);
	printf("\n");

	//3)(*px)++
	px = &x;
	(*px)++;
	printf("x=%d\n", x);
	printf("&x=%d\n", &x);
	printf("*px=%d\n", *px);
	printf("px=%d\n", px);

}

