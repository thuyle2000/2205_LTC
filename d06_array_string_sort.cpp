#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo sap xep chuoi ky tu theo thu tu tu a-z
int main(){
	int n;
	
	while(1){
		printf(" vui long nhap so luong sinh vien [3-15]: ");
		scanf("%d" , &n);
		if(n>=3 && n<=15){
			break; // nhap dung => ket thuc vong lap => dong 16
		}
	}
	
	//khai bao mang chuoi ky tu [ds], chua ten cua n sinh vien
	char ds[n][31];
	
	//vong lap nhap ten cua n-sinh vien
	for(int i=0; i<n; i++){
		fflush(stdin);
		printf(" nhap ten cua sv thu %d: ", i+1);
		scanf("%[^\n]", ds[i]);
	} 
	
	//vong lap in ra bang ds ten cua cac sinh vien
	printf("\n\n Danh sach sinh vien \n");
	for(int i=0; i<n; i++){
		printf("%3d. %s \n", i+1, ds[i]);
	} 
	
	//vong lap sap xep bang ten sinh vien
	char tam[31];
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			//so sanh phan tu thu i voi k
			if(strcmp(ds[i], ds[k])>0){
				strcpy(tam, ds[i]); 		//luu ten sv o dong i => tam
				strcpy(ds[i], ds[k]);	//luu ten sv o dong k => dong i
				strcpy(ds[k], tam);		//luu ten sv o dong i (da luu trong tam) => dong k
			}
		}
	}
		
	//vong lap in ra bang ds ten cua cac sinh vien, sau khi xep thu tu
	printf("\n\n Danh sach sinh vien theo thu tu a-z \n");
	for(int i=0; i<n; i++){
		printf("%3d. %s \n", i+1, ds[i]);
	} 	
}



