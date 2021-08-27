//#include <stdio.h>
//int main() {
//
//	int a = 10, b = 20, c = 30;
//	int* par[3];
//	par[0] = &a;
//	par[1] = &b;
//	par[2] = &c;
//
//	for (int i = 0; i < 3; i++) {
//		printf("*par[%d] : %d\n", i, *par[i]);
//
//	}
//}



//#include <stdio.h>
//int main() {
//
//	char* name[5] = { "메모리","cpu","모니터","메인보드","하드디스크" };
//	int code_number;
//
//	printf("code number : ");
//
//	scanf("%d", &code_number);
//
//	if ((code_number) >= 0 && (code_number) <= 4) {
//		printf("제품명 : %s\n", name[code_number])
//			;
//	}
//
//	else {
//		printf("제품 코드 오류!\n");
//	}
//
//
//}




#include <stdio.h>
void main() {

	int i, j;
	int num1 = 10, num2 = 20, num3 = 30, num4 = 30;
	int arr[2][2] = { 

			{1,2},
			{3,4}
					};

	int* ptr_num[4] = { &num1,&num2,&num3,&num4 }; //포인터 배열
	int(*ptr_arr)[2] = arr; //arr == &arr[0]

	for (i = 0; i < 4; i++) {
		printf("%d ", *ptr_num[i]);

	}
	printf("\n");
	for (i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) 

			printf("%d ", ptr_arr[i][j]);
			printf("\n");
		
	}


}