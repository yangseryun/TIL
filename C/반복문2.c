//#include <stdio.h>
//void main() {
//	int num = 0, i;
//	for (i = 1; i <= 100; i++) {
//		num = num + i;
//	}
//
//	printf("1���� 100������ ���� %d", num);
//}



//#include <stdio.h>
////for���� ����ؼ� �����ϱ�
////����ڿ��� ���ڸ� �Է¹޾�, �Է´��� ���ڸ�ŭ�� ¦���� 1���� ����ϱ�
//int main() {
//
//	int num;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (i % 2 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



#include <stdio.h>
#include <math.h>
//��������� �����ϳ��� �Է¹޾�, �Է¹��� �������� ���� ���
int main() {

	int num;
	printf("�����Է� : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%.0lf ", pow(i, (double)2));
	}
}