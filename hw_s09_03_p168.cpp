#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
homework session 9 - 03 - page 168
Write a program to generate the Fibonacci series. (1,1,2,3,5,8,13,21, ………)
*/
int main() {
	int n;
	printf(" *** CHUONG TRINH IN RA DAY SO FIBONACCI co n-phan tu ***\n");

	while(1) {
		printf(" >> nhap n [>3] : ");
		scanf("%d",  &n);
		if(n>3) {
			break;
		}
	}//ket thuc while

	printf(" >> day so fibonacci %d-phan tu: \n", n);
	int a=0, b=1, c=0;
	for(int i=0; i<n; i++) {
		a=b;
		b=c;
		c=b+a;

		printf(" %d. ", c);
	}
	printf("\n");
}



