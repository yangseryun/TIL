//#include <stdio.h>
//
//struct data {
//	int num;
//	char name[25];
//
//};
//void main() {
//	struct data data = { 1,"���浿" };
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
//	printf("��ȣ : ");
//	scanf("%d", &data->num); // ->�� &���� �켱������ ������
//
//	while (data->num != 0) {
//		printf("�̸� : ");
//		scanf("%s", (data++)->name);
//		printf("��ȣ : ");
//		scanf("%d", &data->num);
//		count++; //�Է��� Ƚ�� ����
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
	//����ü���� �ϳ��� ����ü �����Ϳ� �����Ҵ�
	struct person* pptr1 = (struct person*)malloc(sizeof(struct person));
	
	strcpy(pptr1->name, "�缼��");
	
	pptr1->age = 17;
	
	strcpy(pptr1->address, "���ֱ����� �ϱ� �����");

	printf("�̸� : %s\n", pptr1->name);
	printf("���� : %d\n", pptr1->age);
	printf("�ּ� : %s\n", pptr1->address);

	return 0;
}