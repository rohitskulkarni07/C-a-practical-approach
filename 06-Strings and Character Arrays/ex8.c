#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void isPalindrome(char*);

int main(){

	char str[100];
	printf("Enter a String ");
	scanf("%s",str);

	isPalindrome(str);
	
	return (0);
}


void isPalindrome(char* str){
	int i = 0;
	int j = strlen(str) - 1;

	while(j > i){
		if(str[i++] != str[j--]){
			printf("Not A Palindrome String\n");
			return;
		}
	}
	printf("String is Palindrome\n");
}
