#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Homework session 12-02 page 210
Write a C program to count the number of vowels and the number of consonants in a word.
*/

int main(){
	char s[81];
	char vowels[] = "aeiouAEIOU";
	
	printf(" Chuong trinh dem so nguyen am va phu am \n\n");
	printf(" Nhap chuoi ky tu bat ky: ");
	scanf("%[^\n]", s);
	
	int n = strlen(s); // strlen: dem so ky tu trong chuoi s -> n
	int na=0, pa=0;
	
	//vong lap FOR dem so nguyen am va phu am trong chuoi s
	for(int i=0; i<n; i++){
		if(  (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')  ){
			//ky tu tai vi index i la ky tu chu
			//tiep tuc kiem tra, co phai la nguyen am ko
			if(strchr( vowels, s[i]) ){
				na++;
			}
			else{
				pa++;
			}
		}
	}//ket thuc FOR
	
	printf("\n Chuoi [%s], co: \n", s);
	printf(" - %d nguyen am \n", na);
	printf(" - %d phu am \n", pa);
}



