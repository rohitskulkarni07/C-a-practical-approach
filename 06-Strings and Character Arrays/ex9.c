#include<stdio.h>
#include<string.h>

int main(){

	char str[200];
	char word[20];
	char temp[20];
	
	int i=0,j=0,count=0;

	printf("Enter String \n");
	gets(str);
	
	printf("Enter Word for Search\n");
	gets(word);

	while(str[i]!='\0') {
		printf("In loop\n");

		while(str[i]!=' ' && str[i]!='\0'){
			temp[j] = str[i];	
			i++;j++;

		}
		temp[j]='\0';
		
		if(str[i]!='\0'){
			
			i++;
			j=0;
		}

		if(strcmp(temp,word)==0){
			printf("In count ++");
			count++;
		}
		
		
	}
	if(count==0){
		printf("no match in above string");
	}else{
		printf("%s repeated %d Times in above string",word,count);
	}
}
