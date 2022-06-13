#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo cach su dung phep toan comma (,) trong vong FOR
int main(){
	for(int i=1, j=5;   i<=5;   i++, j--){
		printf(" %2d + %2d = %2d \n", i, j, i+j );
	}
	
	//mo rong bai toan: thuc hien bai toan cong n-lan
	int n;
	printf("\n\n >> nhap so nguyen n: ");
	scanf("%d", &n);
	for(int i=1, j=n;   i<=n;   i++, j--){
		printf(" %2d + %2d = %2d \n", i, j, i+j );
	}
}



