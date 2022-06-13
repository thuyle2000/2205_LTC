#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo lap trinh ham (function) co tham so

//khai bao ham cong2so(int, int);
void cong2so(int a, int b);

int main(){
	printf(" *** DEMO FUNCTION (version 2) ***\n");
	
	//goi ham cong2so lan thu 1
	printf("\n goi ham lan 1: tham so thuc te (actual argument) la 2 hang so \n");
	cong2so(12,37);
		
	//goi ham cong2so lan thu 2
	int a=15, b=28;
	printf("\n goi ham lan 2: tham so thuc te (actual argument) la 2 bien \n");
	cong2so(a,b);	
	
	//goi ham cong2so lan thu 3
	printf("\n goi ham lan 3: tham so thuc te la bien va bieu thuc \n");
	cong2so(a,b*2-3);
}

/*
	dinh nghia ham cong so nguyen bat ky
	- ten ham : cong2so()
	- ko co gia tri tra ve : void
	- co 2 tham so nguyen (tham so hinh thuc - formal arguments): a, b
*/
void cong2so(int a, int b){
	int c = a+b;
	printf(">> %d + %d = %d \n", a, b, c);
	return;
}

