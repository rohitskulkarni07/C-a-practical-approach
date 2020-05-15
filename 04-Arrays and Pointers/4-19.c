//array of pointers
#include<stdio.h>

int main() {
	auto int a = 10,b = 20,c = 30;

	int *arr[] = {&a,&b,&c};

	printf("values : %d\t%d\t%d\n",*arr[0],*arr[1],*arr[2]);
	printf("addresses : %p\t%p\t%p\n",*arr[0],*arr[1],*arr[2]);
	printf("%ld \n",sizeof(arr));	//24
	printf("%ld \n",sizeof(arr[0]));//8
	printf("%ld \n",sizeof(arr[1]));//8
	printf("%ld \n",sizeof(arr[2]));//8
	printf("%ld \n",sizeof(*arr[0]));//4
	printf("%ld \n",sizeof(*arr[1]));//4
	printf("%ld \n",sizeof(*arr[2]));//4
} 
