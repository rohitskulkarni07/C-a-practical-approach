#include<stdio.h>

int main() {

	int a = 10,b = 20;

	//swapping by diision and multiplication
	
	a = a*b;
	b = a/b;
	a = a/b;
	printf("a = %d  b = %d\n",a,b);

	//swapping by Bitwise XOR
	
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d  b = %d\n",a,b);

	//swapping by addition subtraction
	
	a=a+b;
	b=a-b;
	a=a-b;

	printf("a = %d  b = %d\n",a,b);

	return (0);

}
