//find ones compliment
//find twos compliment

#include<stdio.h>

int main() {
	
	int oc,tc,num;			//oc = One's compimant tc = Two's compliment

	printf("Enter Number\n");
	scanf("%d",&num);

	oc = ~num;		 	//negation or tilde sign performs bitwise operation on each bit of number and make 0 as 1 and 1 as 0
	tc = oc + 1;			//Two's compliment is one (1) plus (+) One's Compliment

	printf("One's compliment is : %d\n",oc);	
	printf("Two's compliment is : %d\n",tc);	

	return (0);
}
