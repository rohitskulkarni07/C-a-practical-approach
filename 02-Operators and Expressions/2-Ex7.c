#include<stdio.h>

int main() {

	int num,n,res;

	printf("Enter number to be multiplied\t");
	scanf("%d",&num);

	printf("Enter the value of n\t");
	scanf("%d",&n);

	res = num << n;
	printf("Result of multiplication is %d",res);

	return (0);
}
