//use of char* fgets(char*,int,FILE*)
//@param 1: charachter pointer or array in which you want to store the string 
//@param 2: size of the array in which you want to store the string
//@param 3: from where you want to take the input if(from keboard then use stdin) if(from file use file pointer of that file)
//
#include<stdio.h>
#include<string.h>

int main() {
	char name[25];

	printf("Enter Name:\t");
	fgets(name,25,stdin);
	printf("Name: \t%s\n",name);

	printf("Enter Name:\t");
	fgets(name,25,stdin);
	printf("Name: \t%s\n",name);
	return(0);
}
