#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo bien con tro (pointer)
*/
int main(){
	int n = 10;
	double r = 3.14151617;
	char ch = 'y';
	
	int *pn = &n;
	double *pr = &r;
	char *pch = &ch;
	
	
	printf(" n = %d \n\t\t *pn = %X - %d \n", n, pn, pn);
	printf(" r = %f \n\t\t *pr = %X - %d \n", r, pr, pr);
	printf(" ch = %c \n\t\t *ch = %X - %d \n", ch, pch, pch);
	
	//in gia tri cua n, r, va ch thong qua bien con tro 
	printf("\n");
	printf(" n = %d \n", *pn);
	printf(" r = %f \n", *pr);
	printf(" ch = %c \n", *pch);
}



