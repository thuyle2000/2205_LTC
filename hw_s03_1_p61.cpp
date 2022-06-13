#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//tinh va in ra dien tich, chu vi cua hinh tron
int main(){
	float r, dt, cv;
	
	printf("Day la chuong trinh tinh dien tich va chu vi cua hinh tron \n");
	printf(" Vui long nhap ban kinh r: ");
	scanf("%f", &r);
	
	dt = 3.14*r*r;
	cv = 2 * 3.14 * r;
	
	printf(" >> Dien tich: %f \n", dt);
	printf(" >> Chu vi: %f \n", cv);
	
}



