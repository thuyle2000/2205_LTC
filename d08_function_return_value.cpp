#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo cach lap trinh ham co gia tri tra ve

//khai bao ham
int cong2so(int a, int b);

int main() {
	printf(" *** DEMO FUNCTION (version 3) ***\n");

	//goi ham cong2so lan thu 1
	printf("\n goi ham lan 1: \n");
	int c = cong2so(12,37);
	printf(" 12 + 37 = %d \n", c);

	//goi ham cong2so lan thu 2
	int a=15, b=28;
	printf("\n goi ham lan 2: \n");
	c = cong2so(a,b);
	printf(" %d + %d = %d \n", a, b, c);	
	
	//goi ham cong2so lan thu 3
	printf("\n goi ham lan 3: \n");
	printf(" %d + %d = %d \n", c, a, cong2so(c,a));
	
}

/*
	dinh nghia ham cong so nguyen bat ky
	- ten ham : cong2so()
	- gia tri tra ve : kieu int, la tong cua 2 tham so
	- co 2 tham so nguyen (tham so hinh thuc - formal arguments): a, b
*/
int cong2so(int a, int b) {
	int c = a+b;
	return c;
}

