//string compare using USER DEFINE FUNCTION

#include<stdio.h>

int mystrcmpi(char*,char*);
int main() {
	
	char str1[50];
	char str2[50];

	puts("Strings to be compare");

	printf("Enter string 1: ");
	fgets(str1,50,stdin);
	printf("Enter string 2: ");
	fgets(str2,50,stdin);
	

	int res=mystrcmpi(str1,str2);
	if(res==0){
		puts("String are equal");
	}else {
		puts("String are not equal");
	}
	

	return (0);

}

int mystrcmpi(char* str1,char* str2) {

	int i=0;

	while(str1[i]!='\0' || str2[i]!='\0'){
		
		if(str1[i]==str2[i] || (str1[i]-str2[i])==32 || (str1[i]-str2[i])==-32){
			i++;
		} else {
			return (str1[i]-str2[i]);
		}
	}

	return (0);

}
