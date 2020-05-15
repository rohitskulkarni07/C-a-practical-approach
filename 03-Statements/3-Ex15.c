//sine series
//
#include<stdio.h>

int main() {

	int i=1,n;
	float sum, term, x;

	printf("Enter the value in radians\n");
	scanf("%f",&x);

	printf("enter the power of end term\n");
	scanf("%d",&n);


	sum=0;
	term=x;

	i=1;
	while(i<=n) {

		sum=sum+term;
		term = (term*x*x*-1)/((i+1)*(i+2));
		i=i+2;

	}

	printf("sin of %4.2f is %f",x,sum);
	return 0;
}
