//string copy LIBRRY FUNCTION

#include<stdio.h>
#include<string.h> //char* strcpy(char*,char*)

int main() {

	char src[50] = "Hello";
	char dest[50];
	
	puts("Source string is");
	puts(src);

	strcpy(dest,src);

	puts("destination sring is is");
	puts(dest);

	return (0);
}
