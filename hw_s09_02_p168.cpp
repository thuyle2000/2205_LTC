#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
homework session9-02-page 168
Accept two numbers num1 and num2. Find the sum of all odd numbers between the two
numbers entered.
*/
int main(){
	int n1,n2, start, stop;
	
	printf("nhap so nguyen thu 1: "); scanf("%d", &n1);
	printf("nhap so nguyen thu 2: "); scanf("%d", &n2);
	
	//khoi tao start va stop
	start = n1;
	stop = n2;
	if(n1>n2){
		start = n2;
		stop = n1;
	}
	
	//khai bao bien chua tong cua cac so le giua start va stop
	int sum = 0;
	
	//vong lap tinh tong cua cac so le giua start va stop
	for(int i=start; i<= stop; i++ ){
		if(i%2 == 1){
			printf(" %d +", i);
			sum += i;
		}
	} //ket thuc FOR
	
	printf(" = %d \n", sum);
}



