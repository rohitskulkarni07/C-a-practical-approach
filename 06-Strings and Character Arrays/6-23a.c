//string compare using LIBRARY FUNCTION

#include<stdio.h>
#include<string.h> //int strcmp(char*,char*)

int main() {
	
	char str1[50];
	char str2[50];

	puts("Strings to be compare");

	printf("Enter string 1: ");
	fgets(str1,50,stdin);
	printf("Enter string 2: ");
	fgets(str2,50,stdin);
	

	int res=strcmp(str1,str2);
	if(res==0){
		puts("String are equal");
	}else {
		puts("String are not equal");
	}
	

	return (0);

}
