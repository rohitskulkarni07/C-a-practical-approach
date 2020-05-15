#include<stdio.h>

void main(){

	printf("Printable line before cutting output stram");

	fclose(stdout);

	printf("this line will not be printed as its wriiten after the closing 'stdout' of output Stream");
}
