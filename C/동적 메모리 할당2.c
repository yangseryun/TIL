//#include <stdio.h> 
//#include <stdlib.h>
//
//int main() {
//
//	int arr[3][5]; //2차원 배열 정적할당
//	int x = 1;
//
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 5; i++) {
//			arr[j][i] = x++;
//		}
//	}
//
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 5; i++) {
//			printf("%d ", arr[j][i]);
//		}printf("\n");
//	}
//
//}



#include <stdio.h>
#include <stdlib.h>

void main() {

	int x = 1;
	int row, col;
	int** dbptr;

	printf("행 : ");
	scanf("%d", &row);
	printf("열 : ");
	scanf("%d", &col);

	dbptr = (int**)malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++) {
		dbptr[i] = (int *)malloc(sizeof(int) * col);
	}

	for(int i=0;i<row;i++){
		for (int j = 0; j < col; j++) {
			dbptr[i][j] = x++;
		}
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", dbptr[i][j]);
		}printf("\n");
	}

	for (int i = 0; i < row; i++) {
		free(dbptr[i]);
	}
	free(dbptr);
}	