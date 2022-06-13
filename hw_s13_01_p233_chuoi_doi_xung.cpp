#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
homework s13-01 page 233
Write a program to accept a string and find out if it is a palindrome.
*/
void palindrome();
int main() {
	palindrome();
}

//ham kiem tra 1 chuoi co doi xung ? vd ABBA, MAM, POP, OPPO ...
void palindrome() {
	char text[81];
	printf("nhap chuoi ky tu bat ky : ");
	scanf("%[^\n]" , text);

	int n = strlen(text); //n chua tong so ky tu trong chuoi text
	for(int i=0,j=n-1;  i<j ;   i++,j--) {
		if(text[i] != text[j]) {
			printf(" => [%s] ko phai la chuoi doi xung ! \n", text);
			return;	//ket thuc ham
		}
	}//Ket thuc FOR

	printf(" => [%s] la chuoi doi xung ! \n", text);
}

