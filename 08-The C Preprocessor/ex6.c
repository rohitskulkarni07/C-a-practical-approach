//MACRO to find armstrong or not


#include<stdio.h>
#define pow3(n1) ((n1)*(n1)*(n1))
#define arm(n) ((n==pow3(n%10)+pow3(n/10%10)+pow3(n/100%10))?"is":"is not")

int main() {
	
	int n1;

	printf("ENter N1\n");
	scanf("%d",&n1);

	printf("%d  %s armstrong number",n1,arm(n1));

	return (0);
}
