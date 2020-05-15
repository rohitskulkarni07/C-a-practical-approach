
//perfect number

#include<stdio.h>

int main() {

	int num=0,i=0,sum=0;
	
	printf("Enter number to find perfect or not\n");
	scanf("%d",&num);

	for(i=1;i<num;i++){
	
		if(num%i==0) {

			sum = sum + i;
		}
		
	}

	sum == num ? printf("%d is Perfect\n",num):printf("%d is Not a Perfect Number\n",num);

	return 0;
}
