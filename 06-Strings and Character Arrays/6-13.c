//use of char* gets(char*)
//
// __________________________________________________________________
//|                                                                  |
//| warning: the `gets' function is dangerous and should not be used.|
//|__________________________________________________________________|

#include<stdio.h>
#include<string.h>

int main() {
	char name[25];

	printf("Enter Name:\t");
	gets(name);
	printf("Name: \t%s\n",name);

	printf("Enter Name:\t");
	gets(name);
	printf("Name: \t%s\n",name);
	return(0);
}
