//read upto search set charachter

#include<stdio.h>

int main() {
	
	char name[30];

	printf("Enter Your Name (read upto this char(;))");
	scanf("%[^;|?]",name);

	printf("Name is  :\t%s",name);

	return (0);
}
