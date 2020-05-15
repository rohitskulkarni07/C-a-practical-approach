//alternate chara

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char str1[100];
	char str2[100];
	
	int i=0,count=0;
	
	puts("Enter a String for printing alternate charachter:");
	fgets(str1,100,stdin);
	int j =0;
	while(str1[i]!='\0'){
		
		str2[j] = str1[i];
		
		i+=2;
		j++;

	}
	puts("altered String:");
	puts(str2);
}
