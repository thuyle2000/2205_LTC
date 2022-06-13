#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cach su dung lenh break trong vong lap
int main(){
	int n1,n2;
	
	//yeu cau user nhap gia tri cho n1 nam trong khoang tu 10->100
	do{
		printf(" nhap gia tri n1 [10-100]: ");
		scanf("%d", &n1);
	}while(n1<10 || n1>100);
	
	printf("\n");
	
	//yeu cau user nhap gia tri cho n2 nam trong khoang tu 1 -> n1
	while(1){
		printf(" nhap gia tri n2 [1-%d]: ", n1);
		scanf("%d", &n2);
		if(n2>0 && n2<=n1){
			break;
		}
	}
	
	printf("\n >> n1 = %d , n2= %d \n", n1, n2);
}



