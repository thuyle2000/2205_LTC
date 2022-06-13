#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	demo lap trinh mang cau truc.
	chuong trinh quan ly danh muc sach:
	- moi quyen sach la 1 struct, bao gom : maso, ten, tacgia, don gia
*/

void QLSach();

int main() {
	QLSach();
}


//b1. dinh nghia mau cau truc mo ta 1 quyen sach, dat ten la BOOK
struct BOOK {
	char id[11], title[51], author[31];
	float price;
};

//b2. dinh nghia them 1 ten moi cho [struct BOOK] -> [SACH]
typedef struct BOOK SACH;

//dinh nghia ham quan ly danh muc sach
void QLSach() {
	int n;

	while(1) {
		printf(" nhap so luong sach muon luu tru [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}

	//khai bao bien mang [ds], chua n-quyen sach
	SACH ds[n];		//tuong duong cau lenh:  struct BOOK ds[n];

	//vong lap FOR, nhap du lieu cho n-quyen sach
	for(int i=0; i<n; i++) {
		printf(" >> nhap chi tiet quyen sach thu %d: \n", i+1);

		fflush(stdin);
		printf(" nhap id: ");
		scanf("%[^\n]", ds[i].id);

		fflush(stdin);
		printf(" nhap tua sach: ");
		scanf("%[^\n]", ds[i].title);

		fflush(stdin);
		printf(" nhap tac gia: ");
		scanf("%[^\n]", ds[i].author);

		fflush(stdin);
		printf(" nhap don gia: ");
		scanf("%f", &ds[i].price);
	}//ket thuc FOR nhap du lieu


	printf("\n Danh muc sach \n");
	for(int i=0; i<n; i++){
		printf(" %s, %s, %s, %.2f \n", ds[i].id, ds[i].title, ds[i].author, ds[i].price);
	}

	//sap xep lai danh muc sach theo tua sach
	SACH tam;
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(strcmp(ds[i].title, ds[k].title)>0){
				//dao vi tri cua 2 quyen sach tai dong i va k
				tam = ds[i];
				ds[i] = ds[k];
				ds[k] = tam;
			}
		}
	}
	
	printf("\n Danh muc sach - theo thu tu tua sach \n");
	for(int i=0; i<n; i++){
		printf(" %s, %s, %s, %.2f \n", ds[i].id, ds[i].title, ds[i].author, ds[i].price);
	}



}


