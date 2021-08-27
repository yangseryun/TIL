//#include <stdio.h>
//
//struct data {
//	int num;
//	char name[25];
//
//};
//void main() {
//	struct data data = { 1,"가길동" };
//	struct data* pdata;
//	pdata = &data;
//	
//	printf("pdata->num : %d\n", pdata->num);
//	printf("pdata->name : %s\n", pdata->name);
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct data {
//	int num;
//	char name[25];
//
//};
//void main() {
//	struct data* data;
//	int count = 0,i;
//	data=(struct data*)malloc(sizeof(struct data) * 10);
//
//	printf("번호 : ");
//	scanf("%d", &data->num); // ->가 &보다 우선순위가 빠르다
//
//	while (data->num != 0) {
//		printf("이름 : ");
//		scanf("%s", (data++)->name);
//		printf("번호 : ");
//		scanf("%d", &data->num);
//		count++; //입력한 횟수 증가
//	}
//
//	printf("\n\n");
//	for (int i = count; i > 0; i--) {
//		printf("%d : %s\n", (data - i)->num, (data - i)->name);
//	}
//
//	return 0;
//}





#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
	char name[20];
	int age;
	char address[100];

};
int main() {
	//구조체변수 하나를 구조체 포인터에 동적할당
	struct person* pptr1 = (struct person*)malloc(sizeof(struct person));
	
	strcpy(pptr1->name, "양세련");
	
	pptr1->age = 17;
	
	strcpy(pptr1->address, "광주광역시 북구 용봉동");

	printf("이름 : %s\n", pptr1->name);
	printf("나이 : %d\n", pptr1->age);
	printf("주소 : %s\n", pptr1->address);

	return 0;
}