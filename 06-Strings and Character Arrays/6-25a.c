//string reverse using LIBRRY FUCTION

#include<stdio.h>
char* strrev(char*);

int main() {
	char str[50];

	puts("ENter String for Reverse");
	fgets(str,50,stdin);
	strrev(str);
	printf("after Reversal of string");
	printf("%s\n",str);

	return(0);
}

char *strrev(char* str) {
	
	int i=0,j=0;
	char temp;

	while(str[i]!='\0') {
		i++;
	}
	i--;
	while(i>j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		j++;
		i--;
	}
	return str;

}
