#include<stdio.h>

int main() {
	char name[25];
	int i=0;
	char ch;

	printf("Enter Name:\t");
	while((ch=getchar())!='\n'){
		name[i] = ch;
		i++;
	}	
	name[i] = '\0';

	printf("Name: \t%s\n",name);
	return(0);
}
