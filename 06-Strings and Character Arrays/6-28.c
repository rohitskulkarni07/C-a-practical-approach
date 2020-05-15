//convert string to specific charachter 
//for ex string = rohit key=x
//ans: xxxxx

#include<stdio.h>

char* strset(char*,char);

int main() {

	char str[50];
	char ch;
	puts("Enter String to convert");
	fgets(str,50,stdin);
	puts("Enter key charachter (ex: x | y | Z etc)");
	scanf("%c",&ch);
	
	strset(str,ch);
	
	puts("Converted String is:");
	puts(str);
	return(0);

}
char* strset(char* str,char ch){
	int i=0;

	while(str[i]!='\0'){
		if(str[i]=='\0'){
			return str;
		}else{
			str[i]=ch;
			i++;
		}
	}
	return (str);
}
