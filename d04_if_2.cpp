#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo cau lenh dieu kien if : 
// kiem tra ky tu nhap vao tu ban phim co phai la ky tu chu a-z ?
int main(){
	char c;
	printf("vui long nhap 1 ky tu bat ky: ");
	c = getchar();
	
	//kiem tra
	if ( (c>='a' && c<='z') || (c>='A' && c<='Z') ){
		printf("[%c] la ky tu chu ! \n", c);
	}
	
	printf(" >> cam on ban da su dung chuong trinh !\n");
}



