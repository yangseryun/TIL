//#include <stdio.h>
//
//int x = 3;	//전역변수
//
//void f1();	//함수원형
//
//void main() {
//	int y = 4;	//지역변수
//	printf("x=%d\n", x);
//	printf("y=%d\n", y);
//	f1();	//함수호출
//}
////함수의 구현부
//void f1() {
//	printf("f1() 호출!\n");
//	printf("x=%d\n", x);
//	//printf("y=%d\n", y);
//}



//#include <Stdio.h>
//
//void static_vtest();	//함수의 원형
//
//void main() {
//	static_vtest();		//s_sum : 10
//	static_vtest();		//s_sum : 20
//	static_vtest();		//s_sum : 30
//}
//
//void static_vtest() {
//	int sum = 0;		//지역변수 : 함수실행-종료
//	static s_sum = 0;	//정적변수 : 프로그램실행-종료
//	sum = sum + 10;
//	s_sum = s_sum + 10;
//
//	printf("sum=%d, s_sum=%d\n", sum, s_sum);
//}




//#include <stdio.h>
//void vtest(int);
//
//int global;
//void main() {
//	int local;//지역변수
//	global = 10;
//	local = 10;
//	printf("1. global=%d, local=%d\n", global, local);
//	vtest(local);
//	printf("3. global=%d, local=%d\n", global, local);
//}
//
//void vtest(int local) {//매개변수 : 함수호출-종료
//	global = 20;
//	local = 20;
//	printf("2. global=%d, local=%d\n", global, local);
//}




//#include <stdio.h>
//extern int i, j;	//외부함수
//extern void sum();	//외부함수
//void main() {
//	printf("정수를 입력 : ");
//	scanf("%d", &i); //외부변수 i에 저장
//	printf("정수를 입력 : ");
//	scanf("%d", &j); //외부변수 j에 저장
//	sum();
//	printf("종료\n");
//}
//
//#include <stdio.h>
//int i, j, k; //전역변수
//void sum() {
//	k = j + i;
//	printf("%d+%d=%d\n", i, j, k);
//}



#include <stdio.h>

int main(int a, char* b[]) {
	int i;
	printf("프로그램 이름 %s\n", b[0]);
	if (a < 2) {
		printf("옵션을 설정해야합니다.\n");
	}
	else {
		for (i = 1; i < a; i++) {
			printf("옵션 : %s\n", b[i]);

		}
	}
}