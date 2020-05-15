#include<stdio.h>

int main() {

	int val = 10;
	int *iptr;
	int **pptr;

	iptr = &val;

	pptr = &iptr;

	printf("value of val is %d\n",val);
	printf("value at iptr is %d\n",*iptr);
	printf("value at pptr is %p\n",*pptr);
	printf("value at pptr is %d\n",**pptr);
	printf("iptr contains  %p\n",iptr);
	printf("address of iptr is %p\n",&iptr);
	printf("pptr contains %p\n",pptr);
	printf("address of pptr is %p\n",&pptr);
	return (0);

}
