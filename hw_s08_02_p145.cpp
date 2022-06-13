#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//in ra ten ngon ngu lap trinh tuong ung voi cac ky tu nhap lieu
int main() {
	char ch;

	printf(" nhap 1 ky tu bat ky: ");
	scanf("%c", &ch);

	switch(ch) {
		case 'a':
		case 'A':
			printf(" => Ada \n");
			break;
		case 'b':
		case 'B':
			printf(" => Basic");
			break;
		case 'c':
		case 'C':
			printf(" => Basic");
			break;

		case 'd':
		case 'D':
			printf(" => dBase III");
			break;

		case 'F':
		case 'f':
			printf(" => Fortran");
			break;

		case 'p':
		case 'P':
			printf(" => Pascal \n");
			break;

		case 'V':
		case 'v':
			printf(" => visual C \n");
			break;

		default:
			printf(" => ky tu nhap ko hop le ! \n");
			break;
	}
}



