//negate perticular bit
#include<stdio.h>

int main() {
	int num,bit,orignal,temp;
	
	printf("Enter The Number\n");
	scanf("%d",&num);
	orignal = num;

	printf("Enter The Bit To Be Negate\n");
	scanf("%d",&bit);

	temp = 1<<(bit-1); 	//shift 1 bit to the given position

	num = num ^ temp;	//perform bitwise XOR operation

	printf("Value after Negation %d bit of %d is : %d",bit,orignal,num);


	return (0);
}
