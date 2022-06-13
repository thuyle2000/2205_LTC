#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// demo vong lap long nhau - nested FOR
// ve hinh vuong chua cac ngoi sao
int main() {
	// ve hinh vuong, moi dong 5 ngoi sao
	// version 1 (1 vong lap)
	printf("\n\n >> version 1: \n");
	for(int i=0; i<5; i++) {
		printf(" * * * * * \n");
	}

	printf("\n\n >> version 2: \n");
	//version 2 (2 vong lap long nhau)
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			printf(" *");
		}
		printf("\n");
	}

	printf("\n\n >> version 3: \n");
	//version 3 (2 vong lap long nhau - so dong ngoi sao dc nhap tu ban phim)
	int n;
	printf(" nhap so dong ngoi sao : ");
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf(" *");
		}
		printf("\n");
	}

	printf("\n\n version 4 (ngoi sao tam giac): \n");	
	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			printf(" *");
		}
		printf("\n");
	}
	
}



