#include<stdio.h>

int main() {
	
	extern int a;
	extern int a;

	printf("The Value of a is %d",a);

	return 0;
}
int a = 20;

/*Commenting above line r deleting above line will cause following error
 *
 * /tmp/cc4ktsu9.o: In function `main':
 * 7-3.c:(.text+0x6): undefined reference to `a'
 * collect2: error: ld returned 1 exit status
 *
*/
