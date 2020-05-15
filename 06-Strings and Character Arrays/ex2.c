#include<stdio.h>

int main(){

	char string[100];
	int i=0,count=0;
	char ch;
	
	puts("Enter a String and Enter character for occurence");
	fgets(string,100,stdin);
		
	scanf(" %c",&ch);

	while(string[i]!='\0'){
			if(string[i]==ch){
				count++;
			}
		
		i++;

	}
	printf("Character %c occured %d times",ch,count);
}
