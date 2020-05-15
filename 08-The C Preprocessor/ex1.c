//define MACRO to find the greatest number between two numbers

#include<stdio.h>
#define GREAT(a,b) (a>b?a:b)

int main() {
	
	int num1,num2;
	puts("Enter NUmber1");
	scanf("%d",&num1);

	puts("Enter NUmber2");
	scanf("%d",&num2);

	printf("Maxn of two is %d",GREAT(num1,num2));
	return (0);
}
