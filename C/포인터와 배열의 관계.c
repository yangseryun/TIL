//#include <stdio.h>
//int main() {
//
//	int arr[3] = { 1,2,3 };
//	printf("�迭�� : %d\n", arr);
//	printf("ù��° �ּ� : %d\n", &arr[0]);
//	printf("�ι�° �ּ� : %d\n", &arr[1]);
//	printf("����° �ּ� : %d\n", &arr[2]);
//
//}



//#include <stdio.h>
//int main() {
//
//	int a[5] = { 10,20,30,40,50 };
//	int* ptr; //������������ �ּҸ� ������ ������ ������
//	ptr = a; //= ptr=&a[0]; -> a==&a[0]
//	printf("*ptr:%d\n", *ptr);
//	printf("ptr:%d, &a[0]:%d\n", ptr, &a[0]);
//
//	ptr++;
//	printf("*ptr:%d\n", *ptr);
//	printf("ptr:%d, &a[1]:%d\n", ptr, &a[1]);
//
//}




//#include <stdio.h>
//void main() {
//
//	int a[3] = { 10,20,30 };
//
//	printf("a[0]:%d\n", a[0]);
//	printf("*a:%d\n", *a);
//	printf("*(a+0):%d\n", *(a + 0));
//
//	printf("a[1]:%d\n", a[1]);
//	printf("*(a+1):%d\n", *(a + 1));
//
//	printf("a[2]:%d\n", a[2]);
//	printf("*(a+2):%d\n", *(a + 2));
//
//}




#include <stdio.h>
int main() {

	int ar[4] = { 10,20,30,40 };
	int* par;
	par = ar;//&ar[0]

		

		printf("*(par+0):%d\n", *(par + 0));

		printf("par[0]:%d\n", par[0]);
		printf("par[1]:%d\n", par[1]);
		printf("par[2]:%d\n", par[2]);
		printf("par[3]:%d\n", par[3]);

}