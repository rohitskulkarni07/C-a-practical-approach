#include<stdio.h>

int main() {

	int a = 10;
	int *iptr = &a;
	void *vptr = iptr;


	printf("int* is implicitly converted into void* \n");
	return 0;
}
