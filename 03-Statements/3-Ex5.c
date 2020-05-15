// reverse the given number
//
#include<stdio.h>

int main() {

	int num=0,digit=0,rev=0;

	printf("Enter Number to reverse\n");
	scanf("%d",&num);

	while(num!=0) {

		digit = num % 10; 	// to get digit
		rev = rev *10 + digit; 	// to reverce 
		num = num/10;		//to remove added digit 
	}	
		
	printf("Reverse Number: %d\n",rev);
	
	return 0;
}
