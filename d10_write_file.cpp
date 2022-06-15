#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve cach lap trinh ghi file van ban
int main(){
	//b1. khai bao ten tap tin de luu du lieu tu chuong trinh
	char filename[80] = "baitho.txt";
	
	//b2. open file [baitho.txt] de ghi 1 so dong van ban
	FILE *f = fopen(filename,"w");
	
	//b3. ghi 1 so dong van ban vo tap tin [baitho.txt]
	fputs("bai tho thang 6 \n\n", f);
	fputs("thang 6 troi mua \n", f);
	fputs("troi mua ko ngot \n", f);
	fputs("troi khong mua, minh cung goi troi mua !!!", f);
	fputs("... \n", f);
	fputs("het tho !\n", f);
	
	//b4. dong file
	fclose(f);
	
	printf(">> hoan tat ghi file ! \n");
}



