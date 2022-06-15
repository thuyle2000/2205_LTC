#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ve cach lap trinh doc file van ban
int main() {
	//b1. khai bao ten tap tin de doc du lieu vo chuong trinh
	char filename[80] = "baitho.txt";

	//b2. open file [baitho.txt] de doc noi dung
	FILE *f = fopen(filename,"r");
	
	//b3. doc het cac dong van ban trong tap tin vo bien tam va xuat len man hinh
	char tam[80];
	while(fgets(tam, sizeof(tam), f)){
		printf("%s", tam);
	}
	
	//b4. dong file
	fclose(f);
	
	printf("\n >> hoan tat doc file. \n");
	
}



