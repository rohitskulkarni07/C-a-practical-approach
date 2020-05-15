#include<stdio.h>
#include<stdlib.h>

int main() {

	int *i_ptr;
	

	i_ptr = (int*) calloc (3,sizeof(int));

	*(i_ptr+0) = 10;
	*(i_ptr+1) = 20;
	*(i_ptr+2) = 30;

	i_ptr = (int*) realloc(i_ptr,5*sizeof(int));

	*(i_ptr+3) = 40;
	*(i_ptr+4) = 50;
	
	printf("1 :%d\n",*(i_ptr+0));
	printf("2 :%d\n",*(i_ptr+1));
	printf("3 :%d\n",*(i_ptr+2));
	printf("4 :%d\n",*(i_ptr+3));
	printf("5 :%d\n",*(i_ptr+4));

	return(0);
}

