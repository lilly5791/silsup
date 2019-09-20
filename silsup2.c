#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	float y;
	char z;
	short w;
	double d;
	
	printf("byte of int : %d\n", sizeof(x));
	printf("byte of float : %d\n", sizeof(y));
	printf("byte of char : %d\n", sizeof(z));
	printf("byte of short : %d\n", sizeof(w));
	printf("byte of double : %d\n", sizeof(d));
	
	return 0;
}
