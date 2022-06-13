#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cau truc lenh if-else
//kiem tra so nhap la so chan hay le
int main(){
	int n;
	printf("vui long nhap 1 so nguyen bat ky: ");
	scanf("%d", &n);
	
	//kiem tra n co chia het cho 2 ?
	if(n%2 == 0){
		printf(" >> [%d] la so chan. \n", n);
	}
	else{
		printf(" >> [%d] la so le. \n", n);
	}
	
	printf("Bye bye !!!\n");
}



