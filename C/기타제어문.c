//#include <stdio.h>
//void main() {
//
//	int sum = 0;
//	int i;//for 문 밖에서도 사용이 가능
//	for (i = 1; i <= 100; i++) {
//		sum = sum + i;
//		printf("%d까지의 합은 %d\n", i, sum);
//		if (sum >= 200) {
//			break;
//		}
//	}
//	printf("합이 200보다 커지게 되는 경우는 1부터 %d 까지의 합입니다.", i);
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
//	printf("%d까지 홀수의 합은 %d\n", i, sum);
//	}
//	printf("홀수의 합은 %d입니다\n", sum);
//}



#include <stdio.h>
int main() {
	int a;
	while (1) {
		printf("숫자를 입력하세요 : ");
		scanf("%d", &a);

		if (a < 0)
		{
			return 0;
		}
		else if (a % 2 == 0) {
			printf("짝수입니다.\n");
		}
		else {
			printf("홀수입니다.\n");
		}

	}
}