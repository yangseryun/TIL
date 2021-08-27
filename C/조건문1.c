//#include <stdio.h>
//void main() {
//
//	int a;
//
//	printf("정수입력 : ");
//	scanf("%d", &a);
//
//	if (a % 2 == 0) {
//		printf("%d는 짝수입니다.",a);
//		//다음 명령이 1줄엘때는 { } 로 범위 표시 x 
//	}
//	else
//		printf("%d는 홀수입니다.",a);
//}



//#include <stdio.h>
//void main() {
//
//	int a;
//
//	printf("정수를 입력 : ");
//	scanf("%d", &a);
//
//	if (a >= 90) {
//		printf("grade = A\n");
//	}
//	else if (a >= 80) {
//		printf("grade = B\n");
//	}
//	else if (a >= 70) {
//		printf("grade = C\n");
//	}
//	else if (a >= 60) {
//		printf("grade = D\n");
//	}
//	else
//		printf("grade = E");
//}




#include <stdio.h>
void main() {

	int sign;//입력받은 신호를 저장할 변수

	printf("신호등 프로그램\n");
	printf("신호를 입력하세요 (빨간불:1, 초록불:2)\n");
	scanf("%d", &sign);

	//만약 입력받은 신호가 초록불이라면?

	if (sign == 2) {
		printf("출발\n");
	}

	//만약 입력받은 신호가 빨간불이라면?

	else if (sign == 1) {
		printf("정지\n");
	}

	//그외

	else
		printf("잘못입력하셨습니다.");
}