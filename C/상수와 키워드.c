//#include <stdio.h>
//
//void main()
//{
//	const float PI = 3.14;//심볼릭상수 PI ->값을 변경하지 않겠다.
//	float pi = 3.14;//실수형 변수 pi
//	int radius;//정수형 변수
//	// PI = 3.1; --> 변경이 안된다
//	pi = 3.1;
//
//	scanf("%d", &radius);//radius변수에 키보드로 입력받을 숫자를 저장
//	printf("%d*3.14=%f\n",radius,radius*PI);
//
//}




//#include <stdio.h>
//#define CHARGE 2000 //시간당 요금 ;붙이지 X
//
//void main()
//{
//	int time, rate;//정수형 time, 정수형 rate 변수 생성
//	printf("사용시간을 입력 : ");
//	scanf("%d", &time);//키보드로 입력받은 값을 time에 저장
//
//	rate = time * CHARGE;//time : 3 -> rate 6000
//
//	//CHARGE = 1000; 한번 정의한 값은 변경 x
//		printf("사용요금은 %d원 입니다.", rate);
//}




#include <stdio.h>

void main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", a);
	printf("%d", b);
}