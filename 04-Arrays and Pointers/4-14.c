//array and pointer relation
#include<stdio.h>

int main() {

	int arr[5] = {1,2,3,4,5};
	
	printf("Elements of the array \t%d\t%d\t%d\t%d\t%d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
	printf("Elements of the array \t%d\t%d\t%d\t%d\t%d\n",*(arr+0),*(arr+1),*(arr+2),*(arr+3),*(arr+4));
	printf("Elements of the array \t%d\t%d\t%d\t%d\t%d\n",0[arr],1[arr],2[arr],3[arr],4[arr]);

	return (0);

}
