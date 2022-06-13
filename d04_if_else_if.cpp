#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo if-else-if bac thang (ladder/stair-case)
//nhap diem thi va xep loai ket qua.
int main(){
	int diemKQ;
	
	printf(">> vui long nhap diem ket qua [0-100]: ");
	scanf("%d", &diemKQ);
	
	//phan loai diem va in ket qua phan loai ra man hinh
	if(diemKQ>100 || diemKQ<0){
		printf(">> Diem nhap khong hop le !!! \n");
	}
	else if(diemKQ >=90){
		printf(" => Xep hang A \n");
	}
	else if(diemKQ >=75){
		printf(" => Xep hang B \n");
	}
	else if(diemKQ >=60){
		printf(" => Xep hang C \n");
	}
	else if(diemKQ >=40){
		printf(" => Xep hang D \n");
	}
	else{
		printf(" => Ngoai hang ! \n");
	}
	
}



