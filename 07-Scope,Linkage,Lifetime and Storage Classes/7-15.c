#include<stdio.h>


int main() {

	register int a = 200;
	printf("The Value of is %d \n",a);
	printf("The Address of variable a is %p",&a);
	return (0);
}
/*
 *
 *7-15.c:8:2: error: address of register variable ‘a’ requested
 *printf("The Address of variable a is %p",&a);
 *^~~~~~
 *
 * */
