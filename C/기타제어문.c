//#include <stdio.h>
//void main() {
//
//	int sum = 0;
//	int i;//for �� �ۿ����� ����� ����
//	for (i = 1; i <= 100; i++) {
//		sum = sum + i;
//		printf("%d������ ���� %d\n", i, sum);
//		if (sum >= 200) {
//			break;
//		}
//	}
//	printf("���� 200���� Ŀ���� �Ǵ� ���� 1���� %d ������ ���Դϴ�.", i);
//}


//#include <stdio.h>
//void main() {
//
//	int sum = 0, i;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0)
//		{
//			continue;
//		}sum = sum + i;
//	printf("%d���� Ȧ���� ���� %d\n", i, sum);
//	}
//	printf("Ȧ���� ���� %d�Դϴ�\n", sum);
//}



#include <stdio.h>
int main() {
	int a;
	while (1) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &a);

		if (a < 0)
		{
			return 0;
		}
		else if (a % 2 == 0) {
			printf("¦���Դϴ�.\n");
		}
		else {
			printf("Ȧ���Դϴ�.\n");
		}

	}
}