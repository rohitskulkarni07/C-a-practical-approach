//length of the string using library function


#include<stdio.h>
#include<string.h> // strlen

int main() {

	char *ptr = "Dear";
	char name[50] = "Reader";
	
	printf("Hello :%ld\n",strlen("Hello"));
	printf("Dear  :%ld\n",strlen(ptr));
	printf("Readers :%ld\n",strlen(name));
	

	return (0);

}
