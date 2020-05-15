//reset the bit i.e whenever number is 1 set it to 0
//leave all bit as its

#include<stdio.h>

int main() {
	int val,key,temp;
	
	printf("Enter The Two Number\n");

	scanf("%d",&val);
	scanf("%d",&key);
	
	temp = ~key;		// negation of key value...
	val =  val & temp; 	// perform anding (&ing)

	printf("Value after re-setting bit: %d\n",val);

	return (0);
}
