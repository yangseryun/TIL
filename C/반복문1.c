//#include <stdio.h>
//void main() {
//
//	int a=0;
//	while (a < 10) {
//		printf("while문이 %d번 반복되었습니다.\n", a);
//		a++; //a를 1증가시킨다
//	}
//}




//#include <stdio.h>
//void main() {
//
//	int com = 1;
//	while (com<=10) {
//		printf("%d번 컴퓨터 꺼\n", com);
//		com++;
//	}
//}



//#include <stdio.h>
//void main() {
//
//	int a = 0;
//	do {
//		++a;
//		printf("do-while문이 %d번 반복되었습니다\n", a);
//	}
//	while (a < 10);
//}



#include <stdio.h>
void main() {
	int a;

	while (1) {
	printf("숫자 입력 : ");
	scanf("%d", &a);

	if (a == 0)//무한반복을 종료하는 종료조건
	{
		printf("프로그램 종료\n");
		break; //반복을 중단
	}
	}

}