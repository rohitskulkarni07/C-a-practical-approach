//length of the string using USER DEFINE function


#include<stdio.h>

long int mystrlen(char*);

int main() {

	char *ptr = "Dear";
	char name[50] = "Reader";
	
	printf("Hello :%ld\n",mystrlen("Hello"));
	printf("Dear  :%ld\n",mystrlen(ptr));
	printf("Readers :%ld\n",mystrlen(name));
	

	return (0);

}

long int mystrlen(char* str) {

	long int len = 0;

	while(*(str+len)!='\0') { //stop when found '\0'
		len++;
	}
	return (len);

}
