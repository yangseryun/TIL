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
//	printf("�����Ͻø� 1��, �ƴϸ� 0���� �Է����ּ���!\n");
//	printf("�Է� : ");
//	scanf("%d", &sc);
//	if (sc == TRUE) {
//		printf("�����ϼ̽��ϴ�.\n");
//	}
//	else if(sc==FALSE){
//		printf("�������� �����̽��ϴ�.\n");
//	}
//	else
//	{
//		printf("�߸��Է��ϼ̽��ϴ�.\n");
//	}
//}




#include <stdio.h>

enum COMPUTER{MONITOR,RAM,HDD,DVD};	//enum ����

void parts(int);
void main() {

	int code;
	printf("�ڵ��Է�(0~3) : ");
	scanf("%d", &code);
	parts(code);
}
void parts(int code) {

	enum COMPUTER com_code;	//enum ���� ����

	com_code = code;
	switch (com_code) {

	case MONITOR:	//0
		printf("Monitor-�����\n");
		printf("������ inch\n");
		printf("��Ÿ : �ػ�, ���ļ� ���� ����� ��\n");
		break;

	case RAM:	//1
		printf("RAM-��\n");
		printf("������ Mega Byte\n");
		printf("��Ÿ : DDR, RAM�� �ӵ��� ����� ��\n");
		break;

	case HDD:	//2
		printf("HDD-�ϵ��ũ\n");
		printf("������ Tera Byte\n");
		printf("��Ÿ : �ӵ��� ��Ÿ���� RPM�� Ȯ���� ��\n");
		break;

	case DVD:	//3
		printf("DVD ROM-CD��\n");
		printf("������ ���\n");
		printf("DVD R/W�� DVD R�� ����\n");
		break;
	
	default:
		printf("input error!\n");
	}
	
}