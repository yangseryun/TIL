//#include <stdio.h>
//
//void main() {
//	
//	printf("����ҳ���\n");	//�⺻��� : ���ڿ� ���
//	printf("%d",3);	// ������ ���
//}



//#include <stdio.h>
//
//void main()
//{
// //�����ǻ��� : �ڷ��� ������;
//	int a = 20, b = 10, c;
// //������ ������ : ������=��;
//	c = a + b;
//	printf("%d+%d=%d\n", a, b, c);
//
//	c = a - b;
//	printf("%d-%d=%d\n", a, b, c);
//
//	printf("%d*%d=%d\n", a, b, a*b);
//
//	printf("%d/%d=%d\n", a, b, a/b);
//}


#include <stdio.h>
void main() {

	int a = 12345;
	float pi = 3.141592;

	printf("a : %d \n", a);
	printf("a : %10d\n", a);
	printf("a : %-10d\n", a);

	printf("pi : %f\n", pi);
	printf("pi : %10.2f\n", pi);
	printf("pi : %3.2f\n", pi);
}