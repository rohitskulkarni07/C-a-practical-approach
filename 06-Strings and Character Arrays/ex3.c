#include<stdio.h>

int main(){

	char string[100];
	int i=0,count=0;
	
	puts("Enter a String for counting blank spaces");
	fgets(string,100,stdin);

	while(string[i]!='\0'){
			if(string[i]==' '){
				count++;
			}
		
		i++;

	}
	printf("blankspace occured %d times",count);
}
