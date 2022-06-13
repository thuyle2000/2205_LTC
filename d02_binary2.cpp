#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo phep toan so hoc 2 ngoi ( + - * / va % ) - version 2
int main() {
	int a, b;

	printf(">> nhap gia tri cho so thu 1 : ");
	scanf("%d", &a);

	printf(">> nhap gia tri cho so thu 2 : ");
	scanf("%d", &b);

	printf("a = %d, b = %d \n", a, b );

	printf(">> a + b = %d \n", a+b);
	printf(">> a - b = %d \n", a-b);
	printf(">> a * b = %d \n", a*b);
	printf(">> a / b = %d \n", a/b);
	printf(">> a %% b = %d \n", a%b);
}



