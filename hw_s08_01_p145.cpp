#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//in ra gia tri hop le cua bien x va y 
int main(){
	int x,y;
	
	printf("nhap gia tri x (<2000 hoac >3000): "); scanf("%d", &x);
	printf("nhap gia tri y (100-500): "); scanf("%d", &y);
	
	if(x<2000 || x>3000){
		printf(" >> gia tri cua x : %d \n", x);
	}
	else{
		printf(" >> gia tri cua x ko hop le !!! \n");
	}
	
	if(y>=100 && y<=500){
		printf(" >> gia tri cua y : %d \n", y);
	}
	else{
		printf(" >> gia tri cua y ko hop le !!! \n");
	}
}



