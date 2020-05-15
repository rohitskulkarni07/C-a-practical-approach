//define MACRO to swap two number

#include<stdio.h>
#define swap(a,b) (a^=b^=a^=b)

int main() {
	
	int num1,num2;
	puts("Enter NUmber1");
	scanf("%d",&num1);

	puts("Enter NUmber2");
	scanf("%d",&num2);
	
	printf("num1 = %d, num2 = %d",num1,num2);

	printf("after swap of two is\n");
	swap(num1,num2);
	printf("num1 = %d, num2 = %d",num1,num2);
	return (0);
}
