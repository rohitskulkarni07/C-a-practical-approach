// find sum of each indivisual digit in given number
//
#include<stdio.h>

int main() {

	int num=0,digit=0,sum =0;

	printf("Enter Number to find sum of each digit\n");
	scanf("%d",&num);

	while(num!=0) {

		digit = num % 10; 	// to get digit
		sum = sum + digit; 	// add each digit

		num = num/10;		//to remove added digit 
	}	
		
	printf("Sum of all digit in give number is %d\n",sum);
	
	return 0;
}
