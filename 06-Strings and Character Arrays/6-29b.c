//first occurence of given charachter Using USER DEFINE function

#include<stdio.h>

char* mystrchr(char*,int);

int main() {

	char str1[20];
	char ch;
	char *ptr;

	
	puts("Enter String ");
	fgets(str1,20,stdin);

	puts("Enter Character to be found");
	scanf("%c",&ch);

	ptr = mystrchr(str1,ch);
	
	if(ptr==NULL){
	
		puts("Character Not Found");
	}else{
		printf("index: %ld",ptr-str1);
	}

}
char* mystrchr(char* str,int c){
	int i=0;

	while(str[i]!='\0'){
	
		if(str[i]==c){
			//printf("%d, %ld ,%c",str,str,str);
			return(str+i);
		}
		i++;
	}
	return NULL;
}
