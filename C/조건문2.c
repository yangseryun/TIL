//#include <stdio.h>
//void main() {
//
//	int a;
//	printf("���� �Է� : ");
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
	int sign;		//��ȣ�� �Է¹޾� ������ ����
	printf("��ȣ�� ���α׷�\n��ȣ�� �Է��ϼ���(������:1,�ʷϺ�:2)\n");
	scanf("%d", &sign);

	switch(sign) {
		case 1:
			printf("����");
			break;
		case 2:
			printf("���");
			break;
		default :
			printf("�߸��Է��ϼ̽��ϴ�.");
	}

}