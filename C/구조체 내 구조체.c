//#include <stdio.h>
//
//struct drivingpermit {
//	char issuedAt[20];	//�߱����
//	long dateOfissue;	//�߱޳����
//	long permitNo;		//�����ȣ
//
//};
//
//struct Person {
//	char name[20];
//	char birth[12];
//	long number;
//	struct drivingpermit driving;	//����ü �� ����ü ���� ����
//};
//
//int main() {
//	struct Person per1;
//
//	per1.driving.dateOfissue = 20190110;	//�ܰ������� ����
//	per1.driving.permitNo = 1029312;
//
//	printf("%ld,%ld\n", per1.driving.dateOfissue, per1.driving.permitNo);
// 
//  return 0;
//}




//#include <stdio.h>
////����ü �� ����ü
//struct Person {
//	char name[20];
//	char birth[12];
//	long number;
//
//	struct drivingPermit {
//
//		char issuedAt[20];
//		long dateOfissue;
//		long permitNo;
//
//		}driving;
//};
//int main() {
//	struct Person per1;
//
//	per1.driving.dateOfissue = 20190110;
//	per1.driving.permitNo = 1029312;
//
//	printf("%ld,%ld\n", per1.driving.dateOfissue, per1.driving.permitNo);
//
//	return 0;
//}





//#include <stdio.h>
//
//struct drivingPermit {
//
//	char issuedAt[20];
//	long dateOfissue;
//	long permitNo;
//
//};
//
//struct Person {
//	char name[20];
//	char birth[12];
//	long number;
//	struct drivingPermit driving;
//};
//
//int main() {
//	struct Person per1 = {
//		.name = "Minhocho1",
//		.birth = "19990120",
//		.number = 9271281,
//		{
//			.issuedAt="seoul Korea",
//			.dateOfissue=20190313,
//			.permitNo=192311
//
//	}
//	};
//
//	struct Person per2 = { 
//		"soyuPark",
//		"1990301",
//		9212371,
//			{	"Busan Korea",
//				20190218,
//				291310} 
//		};
//	printf("per1 name : %s\n", per1.name);
//	printf("per2 name : %s\n", per2.name);
//
//	printf("per1.driving.issuedAt ; %s\n", per1.driving.issuedAt);
//	printf("per2.driving.issuedAt ; %s\n", per2.driving.issuedAt);
//	return 0;
//}





#include <stdio.h>
//typedef ���
struct drivingPermit {

	char issuedAt[20];
	long dateOfissue;
	long permitNo;

};

typedef struct Person {
	char name[20];
	char birth[12];
	long number;
	struct drivingPermit driving;
}Person;

int main() {
	 Person per1 = {
		.name = "Minhocho1",
		.birth = "19990120",
		.number = 9271281,
		{
			.issuedAt = "seoul Korea",
			.dateOfissue = 20190313,
			.permitNo = 192311

	}
	};

	 Person per2 = {
		"soyuPark",
		"1990301",
		9212371,
			{	"Busan Korea",
				20190218,
				291310}
	};
	printf("per1 name : %s\n", per1.name);
	printf("per2 name : %s\n", per2.name);

	printf("per1.driving.issuedAt ; %s\n", per1.driving.issuedAt);
	printf("per2.driving.issuedAt ; %s\n", per2.driving.issuedAt);
	return 0;
}
