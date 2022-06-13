#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo ham printf() voi cac modifier
int main(){
	char sp1[] = "coca cola";
	char sp2[] = "banh snack tom cay";
	
	float dg1 = 9.9876;
	float dg2 = 34.59;
	
	int sluong1 = 105, sluong2= 9;
	
	//in bill (ten hang, so luong, don gia, thanh tien) - ko co modifier
	printf("Hoa don \n");
	printf("%s, %d, %f, %f \n", sp1, sluong1, dg1, sluong1*dg1 );
	printf("%s, %d, %f, %f \n", sp2, sluong2, dg2, sluong2*dg2 );
	
	//in bill (ten hang, so luong, don gia, thanh tien) - co modifier
	printf("\n\nHoa don \n");
	printf("%-20s %4d %8.2f %8.2f \n", sp1, sluong1, dg1, sluong1*dg1 );
	printf("%-20s %04d %8.2f %8.2f \n", sp2, sluong2, dg2, sluong2*dg2 );
}



