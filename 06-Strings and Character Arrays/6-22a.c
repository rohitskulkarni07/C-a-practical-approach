//string concat LIBRARY FUNCTION

#include<stdio.h>
#include<string.h> // char* strcat

int main() {
	char src[50] = "HELLO";
	char dest[50] = "WORLD!";

	puts("string are : ");
	puts(src);
	puts(dest);
	puts("After concatination :");
	
	strcat(src,dest);

	puts(src);

	return (0);
}
