#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//thiet ke menu chuong trinh (10 diem)
   char op;
	while(1) {
		fflush(stdin);
		printf("\n\n");
		printf(" ************************************************** \n");
		printf(" * Selecting appropriate action:                  * \n");
		printf(" * 1. Question 1                                  * \n");
		printf(" * 2. Question 2                                  * \n");
		printf(" * 3. Quit program                                * \n");
		printf(" ************************************************** \n");
		printf(" Please input your choice: ");
		scanf("%c" , &op);

		switch(op){
			case '1': break;
			case '2': break;
			case '3': exit(0); //ket thuc chuong trinh C
			default: 
				printf(" >> invalid option ! plz try again ! ");
		}
	}//ket thuc vong lap while de hien thi menu
}// ket thuc ham main



