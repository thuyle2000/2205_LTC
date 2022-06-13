#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//demo phuong phap truyen gia tri, truyen dia chi cua tham so thuc te cho ct ham 

int cong(int a, int b);
int cong2(int *a, int *b);

int main(){
	int a=10, b=20;
	printf(" - trong ham main(): a = %d, b= %d \n\n", a,b);
	printf(" - goi ham cong(a,b): \n");
	int c = cong(a,b);
	printf(" - sau khi goi ham cong(a,b): a = %d, b=%d \n", a,b);
	printf(" - tong c = %d\n\n", c);
	
	printf(" - goi ham cong2(*a,*b): \n");
	c = cong2(&a,&b);
	printf(" - sau khi goi ham cong(*a,*b): a = %d, b=%d \n", a,b);
	printf(" - tong c = %d\n\n", c);	
}

/*
	dinh nghia ham cong 2 so 
	- ten ham : cong()
	- gia tri tra ve : kieu int, la tong cua 2 tham so
	- co 2 tham so nguyen: a, b (nhan gia tri cua tham thuc te)
*/
int cong(int a, int b){
	a = a + b;
	printf("\t >> trong ham cong(int , int): a = %d \n", a);
	return a;
}

/*
	dinh nghia ham cong 2 so- phien ban truyen dia chi tham chieu
	- ten ham : cong2()
	- gia tri tra ve : kieu int, la tong cua 2 tham so
	- co 2 tham so nguyen: a, b (nhan dia chi cua tham thuc te)
*/
int cong2(int *a, int *b){
	*a = *a + *b;
	printf("\t >> trong ham cong(int* , int*): a = %d \n", *a);
	return *a;
}
