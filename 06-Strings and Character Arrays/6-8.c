//Include Search Set only exculde other charachter

#include<stdio.h>

int main() {
	
	char name[20];

	printf("Enter Your Name (Search Set[Rroh])");
	scanf("%[RroOhH]",name);

	printf("Name is (char from search set only) :\t%s",name);

	return (0);
}
