#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo cau lenh dieu kien if : 
// kiem tra ky tu nhap vao tu ban phim co phai la ky tu so?
int main(){
	char c;
	printf("vui long nhap ky tu bat ky : ");
	scanf("%c", &c);
	
	//kiem tra ky tu moi nhap
	if(c>='0'  &&  c<='9'){
		printf("[%c] la ky tu so ! \n", c);
	}
	
	printf("\n >> Cam on ban da su dung chuong trinh !\n");
	
}



