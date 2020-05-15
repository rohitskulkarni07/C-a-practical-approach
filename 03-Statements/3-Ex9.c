// Armstrong Number
//
#include<stdio.h>

int main() {

	int num=0,temp=0,digit=0,sum =0;

	printf("Enter Number to find Armstong or Not\n");
	scanf("%d",&num);
	
	temp = num;

	while(num!=0) {

		digit = num % 10; 		// to get digit
		sum = sum + digit*digit*digit; 	//cube and add each digit
		num = num/10;			//to remove added digit 
	}	
		
	temp==sum?printf("%d is Armstrong number\n",temp):printf("%d in not a Armstrong number\n",temp);
	
	return 0;
}
