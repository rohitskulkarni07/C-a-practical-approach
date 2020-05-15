#include<stdio.h>

int main() {
 
	int *ptr;
	int a = 10;
	int i =1;
	i++;

	printf("%i\n",i);
	ptr = &a;

	printf("%d %d \n",++*ptr,*ptr++);
//	++*ptr => ++(*ptr)
//	*ptr++ => *(ptr+1)
	

	return 0;

}

