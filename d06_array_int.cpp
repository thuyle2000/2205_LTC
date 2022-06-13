#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* demo ve cach lap trinh mang so nguyen.
   nhap bang diem cua 1 sinh vien (5 cot diem), 
   va in ra diem cao nhat, diem thap nhat va diem binh quan
*/
int main(){
	int n = 5;
	
	//khai bao mang so thuc float, ten la [mark] bao gom 5 phan tu (vi n=5)
	float mark[n];	
	
	//vong lap nhap 5 cot diem
	for(int i=0; i<n; i++){
		printf(" >> nhap diem thu %d: ", i+1);
		scanf("%f", &mark[i]);
	}
	
	//vong lap in ra bang diem
	printf("\n >> bang diem ket qua : \n");
	for(int i=0; i<n; i++){
		printf("%7.2f ", mark[i]);
	}
	
	//vong lap tim diem lon nhat, nho nhat va diem tong
	float tong = 0;
	float min=mark[0], max=mark[0];
	for(int i=0; i<n; i++){
		min = (min<mark[i]) ? min : mark[i];
		max = (max>mark[i]) ? max : mark[i];
		tong += mark[i];  // tuong duong lenh tong = tong + mark[i]
	}
	printf("\n\n >> diem thap nhat: %.2f \n", min);
	printf(" >> diem cao nhat: %.2f \n", max);
	printf(" >> diem binh quan: %.2f \n", tong/n);
}



