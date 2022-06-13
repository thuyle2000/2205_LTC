#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//nhap ten, tuoi va tien luong cua nguoi sd, sau do in ra man hinh thong tin nay
int main(){
	char hoten[31];
	int tuoi;
	float luong;
	
	printf(" nhap ho ten: ");
	gets(hoten);
	
	printf(" nhap tuoi: ");
	scanf("%d", &tuoi);
	
	printf(" nhap tien luong: ");
	scanf("%f", &luong);
	
	printf("\n\n Thong tin ca nhan \n");
	printf(" ho ten: %s \n", hoten);
	printf(" tuoi: %d \n", tuoi);
	printf(" thu nhap: %.2f \n", luong);
}



