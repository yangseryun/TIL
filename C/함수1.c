//#include <stdio.h>
//
//void open() {
//	printf("1.���Թ�\n");
//	printf("2.������\n");
//	printf("3.�ٴ�û��\n");
//	printf("4.������\n");
//}
//
//int main() {
//	open();
//}


//
//#include <stdio.h>
////�μ��� �Է¹޾� �μ��� ����ϴ� �Լ�
//void sum() {
//	int x, y;
//	printf("��1 : ");
//	scanf("%d", &x);
//	printf("��2 : ");
//	scanf("%d", &y);
//
//	printf("x+y=%d", x + y);
//}
//
//int main() {
//	sum();
//}



//#include <stdio.h>
//void f1(int x) {//x�� �Լ��� ȣ��ο��� ���� ���޹޾� ������ �Ű�����
//	printf("%d", x);//�Ű������� ������ ���� ���
//}
// 
//int main() {
//	f1(30);
//}



//#include <stdio.h>
//void sum2(int x, int y) {
//	printf("x+y=%d\n", x + y);
//}
//
//void main() {
//	sum2(10, 20);
//}



//#include <stdio.h>
//int f2() {
//	printf("f2() ������\n");
//	return 100;
//}
//
//void main() {
//	printf("f2():%d\n", f2());
//}




//#include <stdio.h>
//int sum3(int x, int y) {
//	int result = x + y;
//	return result;
//}
//void main() {
//	printf("%d", sum3(10, 20));
//}




#include <stdio.h>
int avg(int x, int y);

int main() {
	int a, b, c;

	printf("ù��° �� : ");
	scanf("%d", &a);
	printf("�ι�° �� : ");
	scanf("%d", &b);

	c = avg(a, b);
	printf("%d�� %d�� ��հ��� %d�Դϴ�.\n", a, b, c);
}

int avg(int i, int j) {
	int k;
	k = (i + j) / 2;
	return k;
}