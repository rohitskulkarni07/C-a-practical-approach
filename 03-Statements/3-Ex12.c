//sum series
//(1)+(1+2)+(1+2+3)...

#include<stdio.h>

int main() {

	int terms=0,sum=0;

	printf("Enter How many term you want in sum series\n");
	scanf("%d",&terms);	

	for(int i=0;i<=terms;i++){
	
		for(int j=0;j<=i;j++) {
			sum = sum +j;
		}

	}

	printf("\n%d\n",sum);
	return 0;
}
