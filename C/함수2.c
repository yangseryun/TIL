//#include <stdio.h>
//
//int x = 3;	//��������
//
//void f1();	//�Լ�����
//
//void main() {
//	int y = 4;	//��������
//	printf("x=%d\n", x);
//	printf("y=%d\n", y);
//	f1();	//�Լ�ȣ��
//}
////�Լ��� ������
//void f1() {
//	printf("f1() ȣ��!\n");
//	printf("x=%d\n", x);
//	//printf("y=%d\n", y);
//}



//#include <Stdio.h>
//
//void static_vtest();	//�Լ��� ����
//
//void main() {
//	static_vtest();		//s_sum : 10
//	static_vtest();		//s_sum : 20
//	static_vtest();		//s_sum : 30
//}
//
//void static_vtest() {
//	int sum = 0;		//�������� : �Լ�����-����
//	static s_sum = 0;	//�������� : ���α׷�����-����
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
//	int local;//��������
//	global = 10;
//	local = 10;
//	printf("1. global=%d, local=%d\n", global, local);
//	vtest(local);
//	printf("3. global=%d, local=%d\n", global, local);
//}
//
//void vtest(int local) {//�Ű����� : �Լ�ȣ��-����
//	global = 20;
//	local = 20;
//	printf("2. global=%d, local=%d\n", global, local);
//}




//#include <stdio.h>
//extern int i, j;	//�ܺ��Լ�
//extern void sum();	//�ܺ��Լ�
//void main() {
//	printf("������ �Է� : ");
//	scanf("%d", &i); //�ܺκ��� i�� ����
//	printf("������ �Է� : ");
//	scanf("%d", &j); //�ܺκ��� j�� ����
//	sum();
//	printf("����\n");
//}
//
//#include <stdio.h>
//int i, j, k; //��������
//void sum() {
//	k = j + i;
//	printf("%d+%d=%d\n", i, j, k);
//}



#include <stdio.h>

int main(int a, char* b[]) {
	int i;
	printf("���α׷� �̸� %s\n", b[0]);
	if (a < 2) {
		printf("�ɼ��� �����ؾ��մϴ�.\n");
	}
	else {
		for (i = 1; i < a; i++) {
			printf("�ɼ� : %s\n", b[i]);

		}
	}
}