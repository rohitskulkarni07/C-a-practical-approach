//setting  corresponding bit of value keep reamaing unchanged
//

#include<stdio.h>

int main() {
	int val,key;
	
	printf("Enter The Two Number\n");
	scanf("%d",&val);
	scanf("%d",&key);

	val= val | key;	//perform bitwise OR operation

	printf("Value after setting bit: %d\n",val);


	return (0);
}
