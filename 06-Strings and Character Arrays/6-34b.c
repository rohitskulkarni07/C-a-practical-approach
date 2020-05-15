//string n-compare using USER DEFINE FUNCTION

#include<stdio.h>

int mystrncmp(char*,char*,int);

int main() {
	
	char str1[50];
	char str2[50];
	int n;

	puts("Strings to be compare");

	printf("Enter string 1: ");
	fgets(str1,50,stdin);
	
	printf("Enter string 2: ");
	fgets(str2,50,stdin);
	
	printf("Enter Number of Charachters to be comapare\n");
	scanf("%d",&n);
	

	int res=mystrncmp(str1,str2,n);

	if(res==0){
		puts("String are equal");
	}else {
		puts("String are not equal");
	}
	

	return (0);

}

int mystrncmp(char* str1,char* str2,int n) {

	int i;

	for(i=0;(i<n);i++) {
		
		if(str1[i]!=str2[i]){
			return (str1[i]-str2[i]);
		}
	}

	return (0);

}
