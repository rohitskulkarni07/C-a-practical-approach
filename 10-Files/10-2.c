//fcloseall();

#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("Hello, This line is before flcose() \n");
	//closing all the stream except the stdin stdout stderr etc
	fcloseall();
	printf("This Line is after fclose()");

	return (0);

}
