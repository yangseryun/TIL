//#include <stdio.h>
//struct s_DATA {
//	int grade;
//	int class;
//	int gender;
//};
//struct bit_DATA {
//	int grade : 3;
//	int class :5;
//	int gender : 2;
//};
//void main() {
//
//	struct s_DATA s;
//	struct bit_DATA b;
//	
//	printf("s_DATA:%ld\n", sizeof(s));
//	printf("bit_DATA:%ld\n", sizeof(b));
//}




//#include <stdio.h>
//struct bit_DATA {
//	int grade : 3;
//	int class : 5;
//	int gender : 2;
//
//};
//void main() {
//
//	struct bit_DATA data;
//	data.grade = 1;
//	data.class = 10;
//	data.gender = 0;
//
//	printf("data.grade : %d\n", data.grade);
//	printf("data.class : %d\n", data.class);
//	printf("data.gender : %d\n", data.gender);
//}



#include <stdio.h>
struct bit_DATA {
	int grade : 1;

};
void main() {

	struct bit_DATA data;

	data.grade = 1;

	printf("data.grade : %d\n", data.grade);
}