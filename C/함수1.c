//#include <stdio.h>
//
//void open() {
//	printf("1.가게문\n");
//	printf("2.포스기\n");
//	printf("3.바닥청소\n");
//	printf("4.빵진열\n");
//}
//
//int main() {
//	open();
//}


//
//#include <stdio.h>
////두수를 입력받아 두수를 출력하는 함수
//void sum() {
//	int x, y;
//	printf("수1 : ");
//	scanf("%d", &x);
//	printf("수2 : ");
//	scanf("%d", &y);
//
//	printf("x+y=%d", x + y);
//}
//
//int main() {
//	sum();
//}



//#include <stdio.h>
//void f1(int x) {//x는 함수의 호출부에서 값을 전달받아 저장할 매개변수
//	printf("%d", x);//매개변수에 저장한 값을 출력
//}
// 
//int main() {
//	f1(30);
//}



//#include <stdio.h>
//void sum2(int x, int y) {
//	printf("x+y=%d\n", x + y);
//}
//
//void main() {
//	sum2(10, 20);
//}



//#include <stdio.h>
//int f2() {
//	printf("f2() 실행중\n");
//	return 100;
//}
//
//void main() {
//	printf("f2():%d\n", f2());
//}




//#include <stdio.h>
//int sum3(int x, int y) {
//	int result = x + y;
//	return result;
//}
//void main() {
//	printf("%d", sum3(10, 20));
//}




#include <stdio.h>
int avg(int x, int y);

int main() {
	int a, b, c;

	printf("첫번째 값 : ");
	scanf("%d", &a);
	printf("두번째 값 : ");
	scanf("%d", &b);

	c = avg(a, b);
	printf("%d와 %d의 평균값은 %d입니다.\n", a, b, c);
}

int avg(int i, int j) {
	int k;
	k = (i + j) / 2;
	return k;
}