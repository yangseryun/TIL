//#include <stdio.h>
//int main() {
//
//	int a;
//
//	printf("%p\n", &a);	//&������ : ������ �ּ�
//
//}



//#include <stdio.h>
//void main() {
//
//	int* pa;		//������ �ּ��� ���� : �ڷ����� int ��
//	float* pb;		//������ �ּ��� ���� : �ڷ����� float ��
//	char* pc;
//	long* pd;
//	double* pe;
//
//	printf("sizeof(*pa)=%d\n", sizeof(pa));
//	printf("sizeof(*pb)=%d\n", sizeof(pb));
//	printf("sizeof(*pc)=%d\n", sizeof(pc));
//	printf("sizeof(*pd)=%d\n", sizeof(pd));
//	printf("sizeof(*pe)=%d\n", sizeof(pe));
//	//�����ͺ����� ��� 4byte ũ�⸦ ������
//}




#include <stdio.h>
int main() {

	int a = 10;
	int* pa; //������ ������ //�ּ��� ���� : �ڷ����� ������
	pa = &a;

	printf("a=%d\n", a);
	printf("*pa=%d\n", *pa); //��������������, �ּҷ� ������ ����� ���� �������� ���

	printf("&a=%p\n", &a);
	printf("&pa=%p\n", &pa); //�����ͺ��� pa�� �ּ�
	printf("pa=%p\n", pa);	//�����ͺ��� pa�� �� == a������ �ּ�
	printf("&*pa=%p\n",&*pa); //�����ͺ��� pa�� ������ ��(*)�� �ּ�(&)

}