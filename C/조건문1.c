//#include <stdio.h>
//void main() {
//
//	int a;
//
//	printf("�����Է� : ");
//	scanf("%d", &a);
//
//	if (a % 2 == 0) {
//		printf("%d�� ¦���Դϴ�.",a);
//		//���� ����� 1�ٿ����� { } �� ���� ǥ�� x 
//	}
//	else
//		printf("%d�� Ȧ���Դϴ�.",a);
//}



//#include <stdio.h>
//void main() {
//
//	int a;
//
//	printf("������ �Է� : ");
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

	int sign;//�Է¹��� ��ȣ�� ������ ����

	printf("��ȣ�� ���α׷�\n");
	printf("��ȣ�� �Է��ϼ��� (������:1, �ʷϺ�:2)\n");
	scanf("%d", &sign);

	//���� �Է¹��� ��ȣ�� �ʷϺ��̶��?

	if (sign == 2) {
		printf("���\n");
	}

	//���� �Է¹��� ��ȣ�� �������̶��?

	else if (sign == 1) {
		printf("����\n");
	}

	//�׿�

	else
		printf("�߸��Է��ϼ̽��ϴ�.");
}