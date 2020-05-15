#include<stdio.h>

//auto int a = 10;   not allowed

int main() {

	printf("The value of a is  %d\n",a);

	{
		int b = 20;
		printf("THe Value of b is %d\n",b);
	}

	printf("The value of b is not visible here\n");
	printf("The value of a is %d\n",a);
}

