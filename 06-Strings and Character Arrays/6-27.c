//conver string to uppercase

#include<stdio.h>

char* strupr(char*);

int main() {

	char str[50];

	puts("Enter String to convert in Uppercase");
	fgets(str,50,stdin);

	strupr(str);
	
	puts("Converted String is:");
	puts(str);
	return(0);

}
char* strupr(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	return (str);
}
