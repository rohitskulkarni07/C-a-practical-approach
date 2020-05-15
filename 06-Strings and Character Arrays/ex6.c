//alternate charachter in reverse

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char str1[100];
	char str2[100];
	
	int i,count=0;
	
	puts("Enter a String for printing alternate charachter in reverse:");
	fgets(str1,100,stdin);

	int len = strlen(str1);
	i=len-1;

	int j =0;
	while(i>=0){
		if(str1[i]=='\0'){
			i--;
			continue;
		}	
		str2[j] = str1[i];
		
		i=i-2;
		j=j+1;

	}
	
	str2[j]='\0';

	puts("altered String in reverse:");
	for(i=0;i<strlen(str2);i++){
		printf("%d : %d\n",i,str2[i]);
	}
}
