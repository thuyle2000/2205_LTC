#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ch;
	printf("vui long nhap 1 ky tu chu bat ky [a-z]: ");
	scanf("%c", &ch);
	if(ch>='a' && ch<='z') {
		//day la ky tu chu thuong tu a-z
		//kiem tra nguyen am
		switch(ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf(" >> [%c] la nguyen am ! \n", ch);
				break;
			default:
				printf(" >> [%c] la phu am ! \n", ch);
				break;
		}
	}
	else{
		printf(" >> [%c] khong phai la ky tu chu ! \n", ch);
	}
}



