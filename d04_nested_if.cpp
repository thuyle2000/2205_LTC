#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo nested-if
//kiem tra nam nhuan
int main() {
	int year;
	printf("Chuong trinh kiem tra nam nhuan. \n");
	printf("================================ \n");

	printf("vui long nhap nam bat ky : ");
	scanf("%d", &year);
	
	//kiem tra
	if(year%100 == 0){
		if(year%400 == 0){
			printf(">> %d la nam nhuan the ky (366 ngay) ! \n", year);
		}
		else{
			printf(">> %d la nam the ky ! \n", year);
		}
	}
	else{
		if(year%4 ==0){
			printf(">> %d la nam nhuan (366 ngay) ! \n", year);
		}
		else{
			printf(">> %d la nam binh thuong ! \n", year);
		}
	}
}



