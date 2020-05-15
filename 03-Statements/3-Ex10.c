#include<stdio.h>

int main() {
	int a=0,b=1,c,n=0,count=0;

	printf("enter range for fibonacci series\n");
	scanf("%d",&n);
	while(count<n){
		c=a+b;

		printf("%d ",a);
		
		b=a;
		a=c;

		count++;
	}	
	return 0;
}
