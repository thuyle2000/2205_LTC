#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ep kieu du lieu mong muon - cast
int main() {
	int a, b;

	printf(" nhap so thu 1: ");
	scanf("%d" , &a);
	
	printf(" nhap so thu 2: ");
	scanf("%d" , &b);
	
	float r = (float)a/b;
	
	printf(">> %d / %d = %f \n"  , a, b, r );
}



