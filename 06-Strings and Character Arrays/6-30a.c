//last occurence of given charachter Using library function

#include<stdio.h>
#include<string.h> //char* strrchr(char*,int);

int main() {

	char str1[20];
	char ch;
	char *ptr;

	
	puts("Enter String ");
	fgets(str1,20,stdin);

	puts("Enter Character to be found at last");
	scanf("%c",&ch);

	ptr = strrchr(str1,ch);
	
	if(ptr==NULL){
	
		puts("Character Not Found");
	}else{
		printf("index: %ld",ptr-str1);
	}

}
