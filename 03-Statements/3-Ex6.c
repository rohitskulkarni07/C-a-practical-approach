// palindrome or not

#include<stdio.h>

int main() {

	int num=0,digit=0,rev=0,temp=0;

	printf("Enter Number to check palindrome\n");
	scanf("%d",&num);
	temp=num;

	while(num!=0) {

		digit = num % 10; 	// to get digit
		rev = rev *10 + digit; 	// to reverce 
		num = num/10;		//to remove added digit 
	}	

	rev==temp?printf("Palindrome\n"):printf("Not A Palindrome\n");
	return 0;
}
