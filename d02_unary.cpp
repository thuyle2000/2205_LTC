#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo phep toan 1 ngoi : ++ va --
int main(){
	int x,y,z;
	x=y=10;
	
	printf("x=%d, y=%d \n", x,y);
	
	z = x++;
	printf("z=%d, x=%d \n", z, x);
	
	z = ++y;
	printf("z=%d, y=%d \n", z, y);
	
}



