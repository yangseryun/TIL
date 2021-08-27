//#include <stdio.h>
//void main() {
//	int num = 0, i;
//	for (i = 1; i <= 100; i++) {
//		num = num + i;
//	}
//
//	printf("1부터 100까지의 합은 %d", num);
//}



//#include <stdio.h>
////for문을 사용해서 구현하기
////사용자에게 숫자를 입력받아, 입력답은 숫자만큼의 짝수를 1부터 출력하기
//int main() {
//
//	int num;
//	printf("숫자를 입력하세요 : ");
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
//사용자한테 숫자하나를 입력받아, 입력받은 수까지의 제곱 출력
int main() {

	int num;
	printf("숫자입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%.0lf ", pow(i, (double)2));
	}
}