#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
   demo lenh continue : nhap 1 so nguyen co gia tri tu 0->16, va
   tinh giai thua cua so nay.
*/  
int main(){
	int n;
	
	//vong lap nhap va kiem tra n phai co gia tri thuoc khoang tu 0->16
	do{
		printf(" nhap so nguyen n [0-16]: ");
		scanf("%d" , &n);
		if(n<0 || n>16){
			printf(" >> Loi: gia tri ko hop le, vui long nhap lai !\n");
			continue;
		}
		
		break;
		
	}while(1);
	
	double f = 1; //chua giai thua (factorial) cua n ( f = 1*2*3.. *n )
	for(int i=1; i<=n; i++){
		f = f * i;
	}
	printf("\n >> %d! = %.0f \n", n,f);
	
	
	
}



