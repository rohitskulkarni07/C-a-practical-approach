//addition of arraay elements

#include<stdio.h>

int main(){
	int size =0;
	printf("Enter Array size\n");
	scanf("%d",&size);
	int arr[size];

	printf("input Array Elements\n");
	int sum=0;
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum Of all array elements is %d\n", sum);

	return(0);
}
