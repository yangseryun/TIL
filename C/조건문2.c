//#include <stdio.h>
//void main() {
//
//	int a;
//	printf("점수 입력 : ");
//	scanf("%d", &a);
//
//	switch (a / 10 ) {
//	case 10:
//	case 9:
//		printf("grade = A");
//		break;
//	case 8:
//		printf("grade = B");
//		break;
//	case 7:
//		printf("grade = C");
//		break;
//	case 6:
//		printf("grade = D");
//		break;
//	default:
//		printf("grade = F");
//		break;
//	}
//}



#include <stdio.h>
void main() {
	int sign;		//신호를 입력받아 저장할 변수
	printf("신호등 프로그램\n신호를 입력하세요(빨간불:1,초록불:2)\n");
	scanf("%d", &sign);

	switch(sign) {
		case 1:
			printf("정지");
			break;
		case 2:
			printf("출발");
			break;
		default :
			printf("잘못입력하셨습니다.");
	}

}