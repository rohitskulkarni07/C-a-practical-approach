//conver string to lower case

#include<stdio.h>

char* strlwr(char*);

int main() {

	char str[50];

	puts("Enter String to convert in lowercase");
	fgets(str,50,stdin);

	strlwr(str);
	
	puts("Converted String is:");
	puts(str);
	return(0);

}
char* strlwr(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;
		}
		i++;
	}
	return (str);
}
