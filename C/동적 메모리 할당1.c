#include <stdio.h>
#include <stdlib.h>
int main() {

	int* pa;
	int sum = 0;
	int i, j;
	float avg;

	printf("입력할 정수의 개수 : ");
	scanf("%d", &j);

	pa = (int *)malloc(sizeof(int) * j);

	for (i = 0; i < j; i++) {
		printf("%d번째 숫자 입력 : ", i + 1);
		scanf("%d", &pa[i]);
		sum = sum + pa[i];
	}

	free(pa);
	avg = sum / (float)j;
	printf("sum=%d\n", sum);
	printf("avg=%5.3f\n", avg);
}