#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo vong lap do-while
int main(){
	int n;
	do{
		printf(" vui long nhap n [3-10]: ");
		scanf("%d" , &n);
	}while(n<3 || n>10);
	
	//1. tinh tong cua n-so nguyen dau tien 
	int sum=0;

	for(int i=1; i<=n; i++){
		sum += i ; // tuong duong lenh sum = sum + i;
		printf(" %d + ", i);
	}
	
	//va in tong ra man hinh
	//printf("\n >> tong %d-so nguyen dau tien = %d \n", n, sum);
	printf(" = %d \n", sum);
	

	
	//2. tinh tich cua n-so nguyen dau tien 
	int pro=1;

	for(int i=1; i<=n; i++){
		pro *= i ; // tuong duong lenh pro = pro * i;
		printf(" %d * ", i);
	}
	
	//va in tich ra man hinh
	printf(" = %d \n", pro);
	
	
}



