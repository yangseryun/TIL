//#include <stdio.h>
//void main() {
//	char i, j, k;
//
//	i = getchar();
//	putchar(i);
//
//	getchar();//����, ���͸� ���� getchar�� ���̿� �־�� ��
//
//	j = getchar();
//	putchar(j);
//
//	getchar();
//
//	k = getchar();
//	putchar(k);
//}



//#include <conio.h>
//#include <stdio.h>
//void main() {
//
//	char i, j, k;
//	printf("�Է� : ");
//
//	i = getch();
//	getch();
//
//	j = getch();
//	getch();
//
//	k = getch();
//	getch();
//
//	printf("\n");
//	printf("��� : ");
//	putch(i);
//	putch(j);
//	putch(k);
//}



#include <stdio.h>
void main() {

	char str[31];
	printf("�Է� : ");
	//scanf("%s", str);//���ڿ��� �Է� �޾� ������ �� &�� ������ ����
	//printf("��� : %s", str);

	gets(str);
	puts(str);

}
