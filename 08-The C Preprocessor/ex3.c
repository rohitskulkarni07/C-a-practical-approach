//define MACRO to find the Harmonic mean

#include<stdio.h>
#define hmean(a,b) ((float)(2*(a)*(b))/((a)+(b)))

int main() {
	
	int num1,num2;
	puts("Enter NUmber1");
	scanf("%d",&num1);

	puts("Enter NUmber2");
	scanf("%d",&num2);

	printf("Mean of two is %f\n",hmean(num1,num2));
	return (0);
}
