//string concat USER DEFINE FUNCTION

#include<stdio.h>

char* mystrcat(char*,char*);

int main() {

	char src[50] = "HELLO";
	char dest[50] = "WORLD!";

	puts("string are : ");
	puts(src);
	puts(dest);
	puts("After concatination :");
	
	mystrcat(src,dest);

	puts(src);

	return (0);
}

char* mystrcat(char* src,char* dest){

	int i = 0,j = 0;
	while(src[i]!='\0') {
		i++;
	}
	while(dest[j]!='\0') {
		src[i] = dest[j];
		i++;
		j++;
	}
	src[i] = '\0';
	return src;
}
