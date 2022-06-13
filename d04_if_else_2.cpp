#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo if-else
//kiem tra nam nhuan
int main(){
	int year;
	printf("Chuong trinh kiem tra nam nhuan. \n");
	printf("================================ \n");
	
	printf("vui long nhap nam bat ky : ");
	scanf("%d", &year);
	
	//kiem tra
	if( (year%4==0 && year%100!=0) || (year%400==0)  ){
		printf(" >> %d la nam nhuan !", year);
	}
	else{
		printf(" >> %d la nam thuong co 365 ngay !", year);
	}
	
	printf("\n * Bye bye! *\n");
}



