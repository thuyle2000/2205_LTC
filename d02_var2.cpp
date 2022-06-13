#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// demo ve cach khai bao bien bo nho (variable) - 
// bai tap homework 2.p38: tinh tong va in diem binh quan cua 3 mon VL, HH, SH
int main(){
	int ly = 90, hoa = 78, sinh = 98;
	int tong = ly+hoa+sinh;
	float binhquan = tong/3.0;
	
	printf(">> diem vat ly : %d \n", ly );
	printf(">> diem hoa hoc : %d \n", hoa );
	printf(">> diem sinh vat : %d \n", sinh );
	
	printf("-- diem tong : %d \n", tong);
	printf("-- diem binh quan : %.2f \n", binhquan);
	
}



