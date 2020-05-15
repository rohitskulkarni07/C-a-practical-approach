//even odd

#include<stdio.h>

int main() {

	int num=0;

	printf("Enter Number \n");
	scanf("%d",&num);

	if((num&1) == 0){			//LSB of Every Odd digit is one and LSB of Every even digit is 0 
		printf("Number %d is Even\n",num);

	} else {
		printf("Number %d is Odd\n",num);
	}

	return 0;
}
