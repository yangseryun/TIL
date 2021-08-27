//#include <stdio.h>
////공용체의 크기 -> 가장 큰 변수의 byte 크기만큼 생성!
//union data_1 {
//	char ch;
//	int num;
//	long lo_num;
//};
//
//void main() {
//	union data_1 u_data;
//	printf("union sizeof(u_data) : %ld\n", sizeof(u_data));
//}





//#include <stdio.h>
//union data_1 {
//	char ch;
//	short int num;
//	long lo_num;
//};
//
//void main() {
//	union data_1 data;
//	data.lo_num = 409612865;
//
//	printf("char : %c\n", data.ch); // 1byte는 A라는 문자로 데이터를 표현
//	printf("short int : %d\n", data.num);//4byte는 12865라는 숫자로 데이터를 표현
//	printf("long : %ld\n", data.lo_num);//8byte는 409612865를 숫자로 데이터를 표현
//
//}




#include <stdio.h>
union data_1 {
	short int num;
	char ch[2];

};

void main() {

	union data_1 data;
	data.ch[0] = 'A'; // A의 아스키코드 = 65
	data.ch[1] = 'B'; // B의 아스키코드 = 66

	printf("data.ch[0] = %d\n", data.ch[0]);
	printf("data.ch[1] = %d\n", data.ch[1]);
	printf("data.num = %d\n", data.num);
}