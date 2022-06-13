#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cach su dung ham printf()
int main(){
	int n = 1234;
	float pi = 3.141516;
	char yesno = 'y';
	
	//khai bao bien chuoi [hoten] chua cac ky tu
	char hoten[] = "Ngo Quoc Viet";	
	double diem = 19.183576;
	
	printf(" Demo ham printf() \n");
	printf(" n = [%d], diem KQ= [%f] \n",n, diem );
	printf(" ho va ten sinh vien:\n %s \n", hoten );
	printf(" ho va ten sinh vien:\n\t %s \n", hoten );
	printf(" tiep tuc chuong trinh ? %c \n", yesno);
	
	printf("\n");
	printf(" PI = %f [%%f]\n", pi);
	printf(" PI = %g [%%g]\n", pi);
	printf(" PI = %e [%%e]\n", pi);
	
	printf("\n");
	printf(" diem KQ = %f [f]\n", diem);
	printf(" diem KQ = %g [g]\n", diem);
	printf(" diem KQ = %e [e]\n", diem);
}



