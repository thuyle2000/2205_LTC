#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cach hoat dong cua vong lap for
//in ra 10 so nguyen dau tien theo thu tu : 1 2 3 .. 10, va 10 9 8 ..1
int main(){
	system("cls");		//lenh xoa man hinh
	
	printf("=== Demo FOR loop === \n");
	
	//in ra 10 so nguyen dau tien theo tu tu 1 2 3 .. 9 10
	for(int i=1; i<=10 ; i++){
		printf(" %d .", i);
	}
	
	//in ra 10 so nguyen dau tien theo tu tu 10 9 8 .. 2 1
	printf("\n");
	for(int i=10; i>0; i--){
		printf(" %d .", i);
	}
}



