//#include <stdio.h>
//void main() {
//
//	int a=0;
//	while (a < 10) {
//		printf("while���� %d�� �ݺ��Ǿ����ϴ�.\n", a);
//		a++; //a�� 1������Ų��
//	}
//}




//#include <stdio.h>
//void main() {
//
//	int com = 1;
//	while (com<=10) {
//		printf("%d�� ��ǻ�� ��\n", com);
//		com++;
//	}
//}



//#include <stdio.h>
//void main() {
//
//	int a = 0;
//	do {
//		++a;
//		printf("do-while���� %d�� �ݺ��Ǿ����ϴ�\n", a);
//	}
//	while (a < 10);
//}



#include <stdio.h>
void main() {
	int a;

	while (1) {
	printf("���� �Է� : ");
	scanf("%d", &a);

	if (a == 0)//���ѹݺ��� �����ϴ� ��������
	{
		printf("���α׷� ����\n");
		break; //�ݺ��� �ߴ�
	}
	}

}