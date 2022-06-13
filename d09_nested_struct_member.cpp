#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
demo struct long nhau.
- mo ta cau truc cua 1 thanh vien (ho-ten, email, ngay-thang-nam sinh)
*/

//b1a. dinh nghia cau truc ngay-thang-nam, dat ten la [DATE]
struct DATE {
	int day, month, year;
};

//b1b. dinh nghia cau truc thanh vien, dat ten la [MEMBER]
struct MEMBER {
	char name[31], email[41];
	struct DATE birthday;
};

int main() {
	//b2. khai bao bien [m1], kieu cau truc MEMBER
	struct MEMBER m1;

	// nhap thong tin chi tiet cho thanh vien
	printf("nhap thong tin chi tiet cho thanh vien: \n");

	printf(" nhap ho ten: ");
	scanf("%[^\n]", m1.name);

	printf(" nhap email: ");
	fflush(stdin);
	scanf("%[^\n]", m1.email);

	printf(" nhap ngay-thang-nam sinh: \n");
	
	printf("   ngay: ");
	fflush(stdin);
	scanf("%d", &m1.birthday.day);

	printf("   thang: ");
	fflush(stdin);
	scanf("%d", &m1.birthday.month);

	printf("   nam: ");
	fflush(stdin);
	scanf("%d", &m1.birthday.year);


	//in thong tin cua thanh vien 
	printf("\n === Thong tin thanh vien === \n");
	printf(" ho ten: %s \n", m1.name);
	printf(" email: %s \n", m1.email);
	printf(" ngay sinh: %02d-%02d-%4d \n", m1.birthday.day, m1.birthday.month, m1.birthday.year);
}



