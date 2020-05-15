#include<stdio.h>

int main() {

	char name[] = "Hello";
	const char* str = " Dear";
	const char* temp = str;
	int i=0,j=0;

	while(name[i]!='\0') {
		printf("%c",name[i++]);
	}

	while(*str!='\0') {
		putc(*str,stdout);
		str++;
	}

	while(*("Readers!!"+j)!='\0') {
		putchar(*("Readers!!"+j));
		j++;
	}

	i=0;

	while(name[i]!='\0') {
		putchar(name[i]);
		i++;
	}
	
	while(*temp!='\0'){
		putchar(*temp);
		temp++;
	}
	return (0);
}
