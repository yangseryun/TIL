//#include <stdio.h> //#~ ->����ó���� : <stdio.h> ������ �����϶�
//
////main = ���α׷��� ������, �Լ��� ����
//void main() {// ���������� -> �������, ������ �Ʒ���
//
//	int a, b, sum, sub;
//}


//#include <stdio.h>
//int main()
//{
//	printf("��³���");
//}


#include <stdio.h>
void main()
{
	int a, b;			//���� a,b�� ����
	printf("a=");		//����Ϳ� a=�� ���
	scanf("%d", &a);	//Ű����� �Է¹��� ���� 10���� ������������ a ������ ����

	printf("b=");
	scanf("%d", &b);

	printf("a=%d,b=%d\n", a, b);//a=�Է°�,b=�Է°� : �Է¹��� ���� ���
}