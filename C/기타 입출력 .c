//#include <stdio.h>
//void main() {
//	char i, j, k;
//
//	i = getchar();
//	putchar(i);
//
//	getchar();//공백, 엔터를 사용시 getchar를 사이에 넣어야 함
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
//	printf("입력 : ");
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
//	printf("출력 : ");
//	putch(i);
//	putch(j);
//	putch(k);
//}



#include <stdio.h>
void main() {

	char str[31];
	printf("입력 : ");
	//scanf("%s", str);//문자열을 입력 받아 저장할 때 &를 붙이지 않음
	//printf("출력 : %s", str);

	gets(str);
	puts(str);

}
