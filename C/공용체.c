//#include <stdio.h>
////����ü�� ũ�� -> ���� ū ������ byte ũ�⸸ŭ ����!
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
//	printf("char : %c\n", data.ch); // 1byte�� A��� ���ڷ� �����͸� ǥ��
//	printf("short int : %d\n", data.num);//4byte�� 12865��� ���ڷ� �����͸� ǥ��
//	printf("long : %ld\n", data.lo_num);//8byte�� 409612865�� ���ڷ� �����͸� ǥ��
//
//}




#include <stdio.h>
union data_1 {
	short int num;
	char ch[2];

};

void main() {

	union data_1 data;
	data.ch[0] = 'A'; // A�� �ƽ�Ű�ڵ� = 65
	data.ch[1] = 'B'; // B�� �ƽ�Ű�ڵ� = 66

	printf("data.ch[0] = %d\n", data.ch[0]);
	printf("data.ch[1] = %d\n", data.ch[1]);
	printf("data.num = %d\n", data.num);
}