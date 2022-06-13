#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo cach su dung ham scanf()
int main(){
	int n;
	float f;
	char a;
	char name[31]; 
	
	printf(">> vui long nhap 1 so nguyen bat ky: ");
	scanf("%d", &n);
	
	printf(">> vui long nhap 1 so thuc bat ky: ");
	scanf("%f", &f);
	
	fflush(stdin); // xoa du lieu dang co trong bo dem ban phim
	
	printf(">> vui long nhap 1 ky tu bat ky: ");
	scanf("%c", &a);	
	
	fflush(stdin); // xoa du lieu trong bo dem ban phim
	printf(">> vui long nhap 1 chuoi ky tu bat ky: ");
	scanf("%[^\n]s", name);		//cho phep nhap chuoi cho den khi gap [enter]
	
	//in cac gia tri vua nhap ra man hinh
	printf("n = %d \n", n);
	printf("f = %f \n", f);
	printf("a = %c \n", a);
	printf("name = %s \n", name);
}



