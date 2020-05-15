//string n-copy LIBRRY FUNCTION

#include<stdio.h>
#include<string.h> //char* strncpy(char*,char*)

int main() {

	char src[50];
	char dest[50];
	int n;

	puts("Enter Source string is");
	fgets(src,50,stdin);

	puts("Enter noumber of char to be copied");
	scanf("%d",&n);

	strncpy(dest,src,n);

	puts("destination sring is is");
	puts(dest);

	return (0);
}
