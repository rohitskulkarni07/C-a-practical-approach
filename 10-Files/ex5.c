#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int main() {

	FILE *fp = NULL;
	char file[50],word[50],temp[50];
	char ch = NULL;
	int count = 0,i=0,length;


	printf("Ener The file name\n");
	gets(file);

	fp = fopen(file,"r+");
	
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	}
	puts("Enter THe word you want search");
	gets(word);

	while((ch=fgetc(fp))!=EOF) {
		if(ch ==' '|| ch == '\n'|| ch =='\t') {
			temp[i]= '\0';

			if(strcmp(word,temp)==0){

				count++;
				length = strlen(temp);
				fseek(fp,-1*length-1,SEEK_CUR);
				strrev(temp);
				fprintf(fp,"%s",temp);
				fseek(fp,1L,SEEK_CUR);


			}
			i=0;

		} else {
			temp[i++] = ch;
		}

	}
	printf("Number of replacement of word in the file is %d\n",count);
}

