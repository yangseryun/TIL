//#include <stdio.h>
//enum{A=1,B=2,C=3,D=4};
//
//void main() {
//	printf("A : %d\n", A);
//	printf("B : %d\n", B);
//	printf("C : %d\n", C);
//	printf("D : %d\n", D);
//
//}


//
//#include <stdio.h>
//
//enum{TRUE=1,FALSE=0};
//
//void main() {
//	int sc;
//
//	printf("동의하시면 1번, 아니면 0번을 입력해주세요!\n");
//	printf("입력 : ");
//	scanf("%d", &sc);
//	if (sc == TRUE) {
//		printf("동의하셨습니다.\n");
//	}
//	else if(sc==FALSE){
//		printf("동의하지 않으셨습니다.\n");
//	}
//	else
//	{
//		printf("잘못입력하셨습니다.\n");
//	}
//}




#include <stdio.h>

enum COMPUTER{MONITOR,RAM,HDD,DVD};	//enum 생성

void parts(int);
void main() {

	int code;
	printf("코드입력(0~3) : ");
	scanf("%d", &code);
	parts(code);
}
void parts(int code) {

	enum COMPUTER com_code;	//enum 변수 생성

	com_code = code;
	switch (com_code) {

	case MONITOR:	//0
		printf("Monitor-모니터\n");
		printf("단위는 inch\n");
		printf("기타 : 해상도, 주파수 등을 고려할 것\n");
		break;

	case RAM:	//1
		printf("RAM-램\n");
		printf("단위는 Mega Byte\n");
		printf("기타 : DDR, RAM의 속도를 고려할 것\n");
		break;

	case HDD:	//2
		printf("HDD-하드디스크\n");
		printf("단위는 Tera Byte\n");
		printf("기타 : 속도를 나타내는 RPM을 확일할 것\n");
		break;

	case DVD:	//3
		printf("DVD ROM-CD룸\n");
		printf("단위는 배속\n");
		printf("DVD R/W와 DVD R이 있음\n");
		break;
	
	default:
		printf("input error!\n");
	}
	
}