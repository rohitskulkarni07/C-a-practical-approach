//MACRO to find even or odd

#include<stdio.h>
#define oddeven(n1) ((n1)%2==0?"even":"odd")

int main() {
	
	int n1;

	printf("ENter N1\n");
	scanf("%d",&n1);

	printf("%d is %s",n1,oddeven(n1));

	return (0);
}
