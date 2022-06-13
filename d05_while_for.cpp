#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo while ket hop voi for de ve ngoi sao tam giac co tu 3->10 dong
int main(){
	int n=0;  //khai bao bien n chua so dong cua hinh tam giac
	
	while(n<3 || n>10){
		printf(" nhap so dong [3-10]: ");
		scanf("%d", &n);
	}
	
	//in ngoi sao tam giac co n-dong
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf(" *");
		}
		printf("\n");
	}
}



