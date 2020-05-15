#include<stdio.h>

int main() {

	int a = 10;
	const int *ptr = &a ; //ptr is pointer to an integer which is constant

	printf("%d %d",a,*ptr);

	*ptr = 50;	// invalid operation to assign integer which is const


	return (0);
}
