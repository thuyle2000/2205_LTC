#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo pointer ket hop voi array
*/
int main(){
	int n;
	
	while(1){
		printf("nhap so nguyen n [3-15]: ");
		scanf("%d", &n);
		if(n>=3 && n<=15)
		{
			break;
		}
	}
	
	
	int a[n]; // khai bao mang so nguyen a, co n-phan tu.
	
	//vong lap nhap n-phan tu
	for(int i=0; i<n; i++){
		printf(" nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	int *p = a; //khai bao contro p chua dc cua mang a
	
	//vong lap in noi dung mang a bang con tro p
	printf("\n >> day so vua nhap : \n");
	for(int i=0; i<n; i++){
		printf("%d ", *(p+i) );
	}
	
	//vong lap in noi dung mang a theo thu tu nguoc lai, thong qua con tro p
	printf("\n\n >> day so vua nhap theo thu tu nguoc lai: \n");
	for(int i=n-1; i>=0; i--){
		printf("%d ", *(p+i) );
	}
	
}



