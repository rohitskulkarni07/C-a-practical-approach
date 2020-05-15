//sum series 1+1/2+1/3...

#include<stdio.h>

int main() {

	int i=1,n;
	float sum=0;

	printf("Enter NUMBER of terms\n");
	scanf("%d",&n);

	while(i<=n){

		sum = sum + 1/(float)i; 
		i++;
	}
	printf("Sum series: %f",sum);
}
