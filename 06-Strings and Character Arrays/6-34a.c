//string n-compare using LIBRARY FUNCTION

#include<stdio.h>
#include<string.h> //int strcmp(char*,char*)

int main() {
	
	char str1[50];
	char str2[50];
	int n;

	puts("Strings to be compare");

	printf("Enter string 1: ");
	fgets(str1,50,stdin);
	
	printf("Enter string 2: ");
	fgets(str2,50,stdin);
	
	printf("Enter number of charaters to be compare \n");
	scanf("%d",&n);

	int res=strncmp(str1,str2,n);
	if(res==0){
		puts("String are equal");
	}else {
		puts("String are not equal");
	}
	

	return (0);

}
