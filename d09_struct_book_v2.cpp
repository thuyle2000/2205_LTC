#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo cach lam viec voi bien kieu struct (version 2):
- ct quan ly cac quyen sach, moi quyen sach bao gom (maso, tua, tac-gia, don-gia)
*/

//b1. dinh nghia mau cau truc cua 1 quyen sach, co ten la BOOK
struct BOOK {
	int bookID;
	char title[51];
	char author[31];
	float price;
};


int main(){
	//b2. khai bao bien bo nho co kieu [struct BOOK] 
	//    de luu thong tin 1 quyen sach giao khoa, dat ten cho bien la [b1]
	struct BOOK b1;
	
	// nhap du lieu cho cac muc trong quyen sach [b1]
	printf("nhap ma sach: ");
	scanf("%d", &b1.bookID);
	
	printf("nhap tua sach: ");
	fflush(stdin);
	scanf("%[^\n]", b1.title);
	
	printf("nhap ten tac gia: ");
	fflush(stdin);
	scanf("%[^\n]", b1.author);
	
	printf("nhap don gia: ");
	fflush(stdin);
	scanf("%f", &b1.price);	
	
	// in thong tin cua sach gk trong bien b1 ra man hinh
	printf("Thong tin sach: \n");
	printf(" ma so : %d \n", b1.bookID );
	printf(" tua sach: %s \n", b1.title);
	printf(" tac gia: %s \n", b1.author);
	printf(" don gia: %f \n", b1.price);
	
	
}



