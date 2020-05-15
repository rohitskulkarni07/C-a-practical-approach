//string n-concat library function

#include<stdio.h>
#include<string.h> //for strlen()

int main() {
	
	char str1[50];
	char str2[50];
	int  n;

	puts("Enter 1st String ");
	fgets(str1,50,stdin);

	puts("Enter String to be n-concat");
	fgets(str2,50,stdin);

	puts("Enter THe Value of n");
	scanf("%d",&n);

	strncat(str1,str2,n);

//	puts("Final string is");
	printf("%s",str1);

	return (0);
}
