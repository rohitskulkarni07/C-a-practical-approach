#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char str1[100];
	char str2[100];
	int i=0,count=0;
	char ch;
	
	puts("Enter a String 1:");
	fgets(str1,100,stdin);
		
	puts("Enter a String 2:");
	fgets(str2,100,stdin);

	if(strlen(str1)!=strlen(str2)){
		puts("***String does not matched***");
		exit(0);
	}
	int matched[100];
	int j=0;
	while(str1[i]!='\0'){
		if(str1[i]=='\0'){
			break;
		}
		if(str1[i]==str2[i]){
			count++;
			matched[j] = i;
			j++;
		}
		
		i++;

	}
	

	printf("Character matched at \n");
	for(i=0;i<strlen(str1)-1;i++){
		printf(" %d",matched[i]);
	
	}
}
