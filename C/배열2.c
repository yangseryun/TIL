//#include <stdio.h>
//
//void main() {
//
//	int temp[2][3] = {
//		{10,20,30},
//		{40,50,60}
//	};
//	printf("%4d %4d %4d\n", temp[0][0], temp[0][1], temp[0][2]);
//	printf("%4d %4d %4d\n", temp[1][0], temp[1][1], temp[1][2]);
//
//	printf("sizeof(배열전체) : %d\n", sizeof(temp));
//	printf("sizeof(한행) : %d\n", sizeof(temp[0]));
//}




//#include <stdio.h>
//void main() {
//	int temp[2][2][2] = {
//		{
//			{1,2}, //0행
//			{3,4}  //1행
//		},//0면
//		{
//			{5,6},//0행
//			{7,8},//1행
//		}//1면
//	};
//
//	printf("0번째 면\n");
//	printf("%4d %4d\n", temp[0][0][0], temp[0][0][1]);
//	printf("%4d %4d\n", temp[0][1][0], temp[0][1][1]);
//
//	printf("1번째 면\n");
//	printf("%4d %4d\n", temp[1][0][0], temp[1][0][1]);
//	printf("%4d %4d\n", temp[1][1][0], temp[1][1][1]);
//
//	printf("sizeof(배열전체) : %d\n", sizeof(temp));
//	printf("sizeof(한면) : %d\n", sizeof(temp[0]));
//	printf("sizeof(행) : %d\n", sizeof(temp[0][0]));
//	
//}




#include <stdio.h>
int main() {

	char name[] = "kim";
	char name2[] = "park";

	char names[2][10] = { "kim","park" };
	
	printf("첫 번째 이름 : %s\n", names[0]);
	printf("두 번째 이름 : %s", names[1]);


}