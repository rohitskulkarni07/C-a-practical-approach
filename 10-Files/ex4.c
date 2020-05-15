#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	FILE *fp = NULL;
	char file[50],word[50],temp[50];
	char ch = NULL;
	int count = 0,i=0;


	printf("Ener The file name\n");
	gets(file);

	fp = fopen(file,"r");
	
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	}
	puts("Enter THe word you want search");
	gets(word);

	while((ch=fgetc(fp))!=EOF) {
		if(ch ==' '|| ch == '\n'){
			temp[i]= '\0';

			if(strcmp(word,temp)==0){
				count++;

			}
			i=0;

		} else {
			temp[i++] = ch;
		}

	}
	printf("Number of occurence of word in the file is %d\n",count);
}

