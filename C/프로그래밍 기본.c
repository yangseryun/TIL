//#include <stdio.h> //#~ ->선행처리자 : <stdio.h> 파일을 포함하라
//
////main = 프로그램의 시작점, 함수의 시작
//void main() {// 절차지향언어 -> 순서대로, 위에서 아래로
//
//	int a, b, sum, sub;
//}


//#include <stdio.h>
//int main()
//{
//	printf("출력내용");
//}


#include <stdio.h>
void main()
{
	int a, b;			//변수 a,b를 생성
	printf("a=");		//모니터에 a=을 출력
	scanf("%d", &a);	//키보드로 입력받은 값을 10진수 정수형식으로 a 변수에 저장

	printf("b=");
	scanf("%d", &b);

	printf("a=%d,b=%d\n", a, b);//a=입력값,b=입력값 : 입력받은 값을 출력
}