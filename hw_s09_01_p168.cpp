#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* homework s09-01-page 168
	Write a program to print the series 100, 95 , 90, 85,………., 5
*/
int main() {
	int i=100;
	for( ; i>5 ; i -=5) {
		printf("%d , ", i);
	}
	
	printf("%d", i);
}



