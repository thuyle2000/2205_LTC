#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//tim so lon nhat giua 3 so a,b,c
int main(){
	int a,b,c;
	
	printf(" --- chuong trinh tim so lon nhat --- \n");
	printf(" nhap so thu 1: "); scanf("%d", &a);
	printf(" nhap so thu 2: "); scanf("%d", &b);
	printf(" nhap so thu 3: "); scanf("%d", &c);
	
	//cach 1
	printf("\n *** cach 1 ***\n");
	if(a>b && a>c){
		printf(" => so lon nhat la %d ! \n", a);
	}else if (b>a && b>c){
		printf(" => so lon nhat la %d ! \n", b);
	}
	else{
		printf(" => so lon nhat la %d ! \n", c);
	}
	
	
	//cach 2
	printf("\n *** cach 2 ***\n");
	int max = (a > b) ? a : b; 	// so sanh a voi b => so lon nhat -> max
	max = (max > c) ? max : c; 	// so sanh max voi c => so lon hon -> max
	printf(" => so lon nhat la %d ! \n", max);
	
}



