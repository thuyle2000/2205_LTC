#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ve mang chua danh sach ten cua cac ban sinh vien.
//bang ds nay gom co 5 sv, ten moi sv toi da 30 ky tu
int main(){
	char ds[5][31];
	
	//vong lap nhap vao ds ten sinh vien
	for(int i=0; i<5; i++){
		printf(" nhap ten cua sv thu %d: ", i+1);
		gets(ds[i]); 	// scanf("%[^\n]", ds[i]); fflush(stdin);
	}
	
	//vong lap in ra bang danh sach ten sinh vien
	printf("\n\n Bang danh sach ten sinh vien \n");
	for(int i=0; i<5; i++){
		printf(" %2d. %s\n", i+1, ds[i]);
	}
	
	
}



