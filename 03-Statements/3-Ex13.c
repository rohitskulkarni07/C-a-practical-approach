//sum series 1^2+2^2+3^2+4^2...
//
#include<stdio.h>

int main() {

	int i=1,n,sum=0;

	printf("Enter NUMBER of terms\n");
	scanf("%d",&n);

	while(i<=n){

		sum = sum + i*i; 
		i++;
	}
	printf("Sum series: %d",sum);
}
