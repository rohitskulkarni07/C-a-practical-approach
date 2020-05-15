#include<stdio.h>

union variables{

	char c;
	int i;
	float f;
	double d;

};

int main() {

	union variables var;

	printf("Size of Union variables is %ld\n",sizeof(union variables));
	printf("Size of var is %ld\n",sizeof(var));
/*
	printf("Starting address of 1st is %p\n",&var.c);
	printf("Starting address of 2nd is %p\n",&var.i);
	printf("Starting address of 3rd is %p\n",&var.f);
	printf("Starting address of 4rt is %p\n",&var.d);

*/

}
