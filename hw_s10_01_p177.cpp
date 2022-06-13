#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
homework session 10 - 01 - page 177
Find the factorial (giai thua) of a number
	n! = 1 * 2 * 3 * ... * n
	0! = 1
	
vi du: 
	5! = 1 * 2 * 3 * 4 * 5 = 120
	6! = 1 * 2 * 3 * 4 * 5 * 6 = 720
*/
int main(){
	int n;
	printf(" *** TINH GIAI THUA CUA SO NGUYEN N *** \n");
	
	while(1){
		printf(" >> nhap so nguyen n [>=0]: ");
		scanf("%d",  &n);
		if(n>=0){
			break;
		}
	}
	
	double factorial =1 ;
	for(int i=1; i<=n; i++){
		factorial *= i;
	}
	
	printf(" => %d! = %.0f \n", n, factorial);
}



