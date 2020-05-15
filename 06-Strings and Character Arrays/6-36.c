//convert or set n-charater of string to specific charachter 
//for ex string = rohit key=x n=3
//ans: xxxit

#include<stdio.h>

char* strnset(char*,char,int);

int main() {

	char str[50];
	char ch;
	int  n;

	puts("Enter String to convert");
	fgets(str,50,stdin);
	
	puts("Enter key charachter (ex: x | y | Z etc)");
	scanf("%c",&ch);

	puts("Enter How Many character you want set");
	scanf("%d",&n);
	
	strnset(str,ch,n);
	
	puts("Converted String is:");
	puts(str);
	
	return(0);

}
char* strnset(char* str,char ch,int n){
	int i=0;

	while((str[i]!='\0')&&(i<n)){
		
		if(str[i]=='\0'){
			return str;
		}else{
			str[i]=ch;
			i++;
		}
	}
	return (str);
}
