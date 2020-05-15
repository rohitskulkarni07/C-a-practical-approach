#include<stdio.h>
int main() {
	
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	int *ptr = NULL;
	ptr = arr;

	printf("%d\n",arr[1]);
	printf("%d\n",arr[-1]);
	printf("%d\n",ptr[1]);
	printf("%d\n",ptr[-1]);
	printf("%d\n",*(ptr+1));
	printf("%d\n",*ptr);

	printf("1 .%ls\n",ptr);
	printf("2 .%d\n",ptr);

	return 0;
}
