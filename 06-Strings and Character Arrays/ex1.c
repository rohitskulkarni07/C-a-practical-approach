#include<stdio.h>

int main(){

	char string[100];
	int i=0,count=0;

	puts("Enter a String");
	fgets(string,100,stdin);

	while(string[i]!='\0'){
	
		switch(string[i]) {

			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':

			count++;
		}
		i++;

	}
	printf("Vowels:%d",count);
}
