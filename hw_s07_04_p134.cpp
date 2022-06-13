#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//yeu cau tinh luong cuoi thang cua nhan vien, khi biet lcb va bac luong
int main() {
	int luongCB;
	char bacLuong;

	printf(" Chuong trinh tinh luong cuoi thang \n");

	printf(" >> nhap bac luong [A|B|C]: ");
	scanf("%c", &bacLuong);
	printf(" >> nhap luong co ban: ");
	scanf("%d", &luongCB);

	int phuCap=100;
	switch(bacLuong) {
		case 'a':
		case 'A':
			phuCap=300;
			break;
		case 'b':
		case 'B':
			phuCap=250;
			break;
	}
	printf(" => Phu cap: %d \n", phuCap);
	printf(" => Luong cuoi thang: %d \n", luongCB+phuCap);
}



