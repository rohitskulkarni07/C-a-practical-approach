#include<stdio.h>

int main() {
	int a = 10;
	
	int *iptr = &a;

	void *voidPtr = (void*)iptr;

	printf("%p %p\n",*iptr,*voidPtr);

	*iptr++;
	*voidPtr++;

	printf("%p %p\n",*iptr,*voidPtr);
	return 0;
}
