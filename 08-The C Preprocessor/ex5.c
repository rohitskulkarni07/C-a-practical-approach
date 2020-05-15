//define MACRO to find the min

#include<stdio.h>
#define min1(a,b) (a<b?a:b)
#define min2(a,b,c) (min1(a,b)<c?min1(a,b):c)

int main() {
	
	int num1,num2,num3;

	puts("Enter NUmber1");
	scanf("%d",&num1);

	puts("Enter NUmber2");
        scanf("%d",&num2);
	
	puts("Enter NUmber3");
	scanf("%d",&num3);

	printf("Min of three is %d",min2(num1,num2,num3));
	return (0);
}
