//#include <stdio.h>
//int main() {
//
//	int x = 10, y = 20;
//	int temp;
//	printf("x:%d, y:%d\n", x, y);
//
//	temp = x;
//	x = y;
//	y = temp;
//
//	printf("x:%d, y:%d", x, y);
//
//}



#include <stdio.h>
void swap( int , int  );
void main() {
		int x = 10, y = 20; //main�� ��������
		int temp;

		printf("x:%d, y:%d\n", x, y);
		swap(x, y);
		printf("main x:%d, y:%d\n", x, y);
}
void swap(int x, int y) // swap�� �Ű�����
{
		int temp;
		
		temp = x;
		x = y;
		y = temp;

		printf("swap( ) ����!\n");
		printf("swap x:%d, y:%d\n", x, y);
}



