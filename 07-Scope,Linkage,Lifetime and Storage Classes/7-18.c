#include<stdio.h>

int main() {
	
	extern int a =  100;
	
	printf("THe value of a is %d\n", a);

	return (0);
}

//
//7-18.c: In function ‘main’:
//7-18.c:5:13: error: ‘a’ has both ‘extern’ and initializer
//extern int a =  100;
//

