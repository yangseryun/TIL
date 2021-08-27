//#include <stdio.h>
//
//int main() {
//
//	int a[3];
//	printf("a=%d\n", &a);
//	printf("a=%d\n", a);
//	printf("a[0]=%d\n", &a[0]);
//	printf("a[1]=%d\n", &a[1]);
//	printf("a[2]=%d\n", &a[2]);
//
//	printf("sizeof(a)=%d\n", sizeof(a));//sizeof(변수):변수가 몇 byte?
//}




//#include <stdio.h>
//void array(int arr[5], int arrr[5]);
//int main() {
//
//	int a[5] = { 1,2,3,4,5 };
//	/*int a[5];
//	a= { 1, 2, 3, 4, 5 };	불가능*/
//	int b[5];
//
//	//a의 요소를 b에 복사
//	array(a, b);
//
//	printf("a : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("b : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//}
//void array(int arr[5], int arrr[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		arrr[i] = arr[i];
//	}
//}




//#include <stdio.h>
//int main() {
//	char str1[] = "hello";
//	char str2[] = { 'h','e','l','l','o'};
//
//	printf("sizeof(str1):%d\n", sizeof(str1));
//	printf("sizeof(str2):%d\n", sizeof(str2));
//
//}



#include <stdio.h>
#include <string.h>

int main() {
	char c[]="korea";
	char n[10];
	strcpy(n, c);
	printf("c=%s, n=%s\n", c, n);
}



