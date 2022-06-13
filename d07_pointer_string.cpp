#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo pointer ket hop voi chuoi ky tu (string) 
*/

int main(){
	int n;
	
	while(1){
		printf(" nhap so luong sinh vien [5-15]: ");
		scanf("%d", &n);
		if(n>=5 && n<=15){
			break;
		}
	}
	
	//khai bao mang ds, chua ten cua n-sinh vien (ten co do dai toi da la 30 ky tu)
	char ds[n][31];
	
	//vong lap nhap ho ten cua n-sinh vien
	for(int i=0; i<n; i++){
		fflush(stdin);
		printf(" nhap ho ten cua sinh vien thu %d: ", i+1);
		scanf("%[^\n]", ds[i]);
	}
	
	//vong lap in ra danh sach ho ten cua n-sinh vien
	printf("\n *** danh sach sinh vien *** \n");
	for(int i=0; i<n; i++){
		printf(" %2d. %s \n", i+1, ds[i]);
	}
	
	
	char name[31];
	fflush(stdin);
	printf("\n nhap ten cua sinh vien muon tim: ");
	scanf("%[^\n]", name);
	
	
	int count=0;
	//vong lap in ra danh sach ho ten cua sinh vien muon tim
	printf("\n *** danh sach sinh vien co ten [%s] *** \n", name);
	for(int i=0; i<n; i++){
		//kiem tra ho ten cua sv o dong i trong [ds], co chua noi dung cua bien [name] ko? 
		if(strstr(ds[i] , name )){
			//neu co, in ho ten cua sv tai dong i ra man hinh
			printf(" - %s \n", ds[i]);
			count++;
		}
	}//ket thuc FOR
	
	
	if(count==0){
		printf(" >> KO Tim Thay Sinh Vien co ten [%s]! \n", name);
	}
	
	
}



