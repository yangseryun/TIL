//#include <stdio.h>
//
//struct movie {
//	char name[30];
//	char actor[30];
//};
//
//int main() {
//	struct movie movies[3]; //movies[0], movies[1], movies[2]
//	//name, actor �Է�
//	for (int i = 0; i < 3; i++) {
//		printf("%d��° ��ȭ ���� : ", i + 1);
//		scanf("%s", movies[i].name);
//		printf("%d��° ��ȭ ��� : ", i + 1);
//		scanf("%s", movies[i].actor);
//	}
//
//	printf("--------------movies--------------\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d��° ��ȭ ���� : %s\n", i + 1, movies[i].name);
//		
//		printf("%d��° ��ȭ ��� : %s\n", i + 1, movies[i].actor);
//		
//	}
//}




#include <stdio.h>
// �ʵ� : �̸�,�ּ�,��ȭ��ȣ,���ǰ���,�������
struct teacher {
	char name[11];
	char address[30];
	char tel[11];
	char lesson[20];
	long birth;
};

void main() {
	int i;
	struct teacher tears[3];
	for (i = 0; i < 3; i++) {
		printf("name : ");
		scanf("%s", tears[i].name);

		printf("address : ");
		scanf("%s", tears[i].address);

		printf("tel : ");
		scanf("%s", tears[i].tel);

		printf("lesson : ");
		scanf("%s", tears[i].lesson);

		printf("birth : ");
		scanf("%ld", &tears[i].birth);
	}

	for (i = 0; i < 3; i++) {
		printf("------------%d�� ������ ����------------\n", i + 1);
		printf("�̸� : %s\n�ּ� : %s\n����ó : %s\n", tears[i].name, tears[i].address, tears[i].tel);
		printf("��� ���� : %s\n�������: %ld\n", tears[i].lesson, tears[i].birth);
	}
}
