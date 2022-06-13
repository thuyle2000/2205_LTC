#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cach lap trinh ham (function) don gian, ko co doi so.

//lenh khai bao ham cong2so()
void cong2so();

int main(){
	
	printf(" *** DEMO FUNCTION (version 1) ***\n");
	
	//goi ham cong2so() de in ra ket qua cua phep cong 10+28
	cong2so();
	printf("\n ============= \n");
	
	//goi ham cong2so() lan 2 de in ra ket qua cua phep cong 10+28
	cong2so();
}

/*
 dinh nghia ham cong 2 so nguyen (cong2so), 
 	- ko co gia tri tra ve (void)
 	- ko co tham so ()
*/
void cong2so(){
	int a = 10, b=28;
	int c = a+b;
	printf(" %d + %d = %d \n", a,b,c);
	return;
}

