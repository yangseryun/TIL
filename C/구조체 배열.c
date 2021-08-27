//#include <stdio.h>
//
//struct movie {
//	char name[30];
//	char actor[30];
//};
//
//int main() {
//	struct movie movies[3]; //movies[0], movies[1], movies[2]
//	//name, actor 입력
//	for (int i = 0; i < 3; i++) {
//		printf("%d번째 영화 제목 : ", i + 1);
//		scanf("%s", movies[i].name);
//		printf("%d번째 영화 배우 : ", i + 1);
//		scanf("%s", movies[i].actor);
//	}
//
//	printf("--------------movies--------------\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d번째 영화 제목 : %s\n", i + 1, movies[i].name);
//		
//		printf("%d번째 영화 배우 : %s\n", i + 1, movies[i].actor);
//		
//	}
//}




#include <stdio.h>
// 필드 : 이름,주소,전화번호,강의과목,생년월일
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
		printf("------------%d번 선생님 정보------------\n", i + 1);
		printf("이름 : %s\n주소 : %s\n연락처 : %s\n", tears[i].name, tears[i].address, tears[i].tel);
		printf("담당 과목 : %s\n생년월일: %ld\n", tears[i].lesson, tears[i].birth);
	}
}
