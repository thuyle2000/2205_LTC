#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//khai bao cac ham duoc goi trong ham main()
void question2();
void question1();

int main() {

	char op;
	while(1) {
		fflush(stdin);
		printf("\n\n");
		printf(" ************************************************** \n");
		printf(" * Selecting appropriate action:                  * \n");
		printf(" * 1. Task 1                                      * \n");
		printf(" * 2. Task 2                                      * \n");
		printf(" * 3. Quit program                                * \n");
		printf(" ************************************************** \n");
		printf(" Please input your choice: ");
		scanf("%c" , &op);

		switch(op) {
			case '1':
				question1();
				break;
			case '2':
				question2();
				break;
			case '3':
				exit(0); //ket thuc chuong trinh C
			default:
				printf(" >> invalid option ! plz try again ! ");
		}
	}//ket thuc vong lap while de hien thi menu
}// ket thuc ham main



struct DOCTOR {
	char id[10], name[31], specialist[31];
	int exp_years;
};

void question2() {
	int n;
	while(1) {
		printf("Enter number of doctors [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) {
			break;
		}
	}

	//khai bao mang [ds] chua n-bacsi
	struct DOCTOR ds[n];

	//nhap du lieu cho n-bacsi
	printf("Please enter the data for \n");
	for(int i=0; i<n; i++) {
		fflush(stdin);
		printf("\nid: ");  scanf("%[^\n]", ds[i].id);
		
		fflush(stdin);
		printf("name: "); scanf("%[^\n]", ds[i].name);
		
		fflush(stdin);
		printf("specialist: "); scanf("%[^\n]", ds[i].specialist);
				
		fflush(stdin);
		printf("exp years: "); 	scanf("%d", &ds[i].exp_years);		
	}
	
	int count =0;
	printf("\n List of Doctors (over ten years experience) \n");
	for(int i=0; i<n; i++){
		if(ds[i].exp_years >=10){
			printf("Id: %s, name: %s, specialist: %s, exp-years: %d \n",
			ds[i].id, ds[i].name, ds[i].specialist,ds[i].exp_years);
			
			count++;
		}
	}// ket thuc vong lap FOR
	
	if(count==0){
		printf(" >> NOT FOUND !!! \n\n");
	}
}



void question1() {


}

