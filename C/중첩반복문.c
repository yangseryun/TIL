//#include <stdio.h>
//void main() {
//	for (int i = 2; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%dX%d=%d\n", i,j, j * i);
//		}
//	}
//}



//
//#include <stdio.h>
///*
//***
//***
//***
//*/
//void main() {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}




//#include <stdio.h>
///*
//*
//**
//***
//****
//*****
//*/
//void main() {
//	for (int i = 0; i < 5; i++) {
//				for (int j = 0; j <=i; j++) {
//					printf("*");
//			}
//				printf("\n");
//			}
//}




//#include <stdio.h>
///*
//*****
//****
//***
//** 
//*
//*/
//void main() {
//	for (int i = 0; i < 5; i++) {
//				for (int j = 0; j <=4-i; j++) {
//					printf("*");
//			}
//				printf("\n");
//			}
//}





#include <stdio.h>
/*
*****
 ****
  ***
   **
    *
*/
void main() {
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < i;j++) {
			printf(" ");
		}

		for (int j = 0; j <= 4 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}