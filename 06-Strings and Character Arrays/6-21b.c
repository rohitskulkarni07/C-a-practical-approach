//string copy USER DEFINE FUNCTION

#include<stdio.h>

char* mystrcpy(char*,char*);

int main() {

	char src[50] = "Hello";
	char dest[50] ;

	puts("Source string is");
	puts(src);

	mystrcpy(dest,src);

	puts("destination string is");
	puts(dest);

	return (0);
}

char* mystrcpy(char* dest,char* src){

	int i = 0;

	while(src[i]!='\0') {
		
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0'; 	//'\0' (null charachter at the last);
	return dest;

}
