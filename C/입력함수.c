//#include <stdio.h>
//
//void main() {
//
//	int int_a;
//	printf("입력 : ");
//	scanf("%3d", &int_a);
//	//scanf_s("형식지정자",&변수명,sizeof(자료형));
//	printf("출력 : %d", int_a);
//	
//}



#include <stdio.h>
void main()
{
	int aa, bb;
	printf("입력 : ");
	scanf("%d %d", &aa, &bb);

	printf("aa=%d\n", aa);
	printf("bb=%d", bb);
}