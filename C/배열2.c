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
//	printf("sizeof(�迭��ü) : %d\n", sizeof(temp));
//	printf("sizeof(����) : %d\n", sizeof(temp[0]));
//}




//#include <stdio.h>
//void main() {
//	int temp[2][2][2] = {
//		{
//			{1,2}, //0��
//			{3,4}  //1��
//		},//0��
//		{
//			{5,6},//0��
//			{7,8},//1��
//		}//1��
//	};
//
//	printf("0��° ��\n");
//	printf("%4d %4d\n", temp[0][0][0], temp[0][0][1]);
//	printf("%4d %4d\n", temp[0][1][0], temp[0][1][1]);
//
//	printf("1��° ��\n");
//	printf("%4d %4d\n", temp[1][0][0], temp[1][0][1]);
//	printf("%4d %4d\n", temp[1][1][0], temp[1][1][1]);
//
//	printf("sizeof(�迭��ü) : %d\n", sizeof(temp));
//	printf("sizeof(�Ѹ�) : %d\n", sizeof(temp[0]));
//	printf("sizeof(��) : %d\n", sizeof(temp[0][0]));
//	
//}




#include <stdio.h>
int main() {

	char name[] = "kim";
	char name2[] = "park";

	char names[2][10] = { "kim","park" };
	
	printf("ù ��° �̸� : %s\n", names[0]);
	printf("�� ��° �̸� : %s", names[1]);


}