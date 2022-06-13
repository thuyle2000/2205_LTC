#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//khai bao cac ham duoc goi trong ham main()
void question2();

int main() {
	//thiet ke menu chuong trinh (10 diem)
	char op;
	while(1) {
		fflush(stdin);
		printf("\n\n");
		printf(" ************************************************** \n");
		printf(" * Selecting appropriate action:                  * \n");
		printf(" * 1. Question 1                                  * \n");
		printf(" * 2. Question 2                                  * \n");
		printf(" * 3. Quit program                                * \n");
		printf(" ************************************************** \n");
		printf(" Please input your choice: ");
		scanf("%c" , &op);

		switch(op) {
			case '1':
				break;
			case '2':
				question2();	// goi ham quan ly cac hinh chu nhat
				break;
			case '3':
				exit(0); //ket thuc chuong trinh C
			default:
				printf(" >> invalid option ! plz try again ! ");
		}
	}//ket thuc vong lap while de hien thi menu
}// ket thuc ham main


//cau so 2: quan ly danh sach cac hinh chu nhat trong mang cau truc
//2.1 dinh nghia cau truc hinh chu nhat (struct RECT)
struct RECT {
	int w, h;
	char color[21];
};

//2.2 viet ham question2() de quan ly cac hinh chu nhat
void question2() {
	int n;

	//b1. nhap so luong hinh chu nhat muon quan ly vo bien n
	while(1) {
		printf(" Enter the number of rectangles [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}//ket thuc while


	//b2. khai bao mang chua n-hinh chu nhat
	struct RECT ds[n];

	//b3. viet vong lap nhap du lieu cho n-hinh chu nhat
	printf(" Please enter the data for \n");
	for(int i=0; i<n; i++) {
		printf(" Rectangle no %d: \n", i+1);
		printf(" Width: ");
		scanf("%d" , &ds[i].w);
		printf(" Height: ");
		scanf("%d" , &ds[i].h);
		fflush(stdin);
		printf(" Color: ");
		scanf("%[^\n]" , &ds[i].color);
	}

	//b4. in danh sach n-hinh chu nhat, nhap o buoc b3

}


