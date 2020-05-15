#include<stdio.h>
#include<stdlib.h>

/*	
*/


int main() {

	FILE *fp;
	char ch;
	fpos_t location;

	fp =  fopen("abc.txt","r+"); 	//opening in update mode

	if(fp == NULL){
		printf("Unable To OPen THe File");
		exit(1);

	}

	fgetpos(fp,&location);
		
	fsetpos(fp,&location);
	fputs("25",fp);

	fputc('1',fp);

	fsetpos(fp,&location); 	//set position of pointer to beginning of the file

	while((ch=fgetc(fp))!=EOF){	//print all char from file to stdin
		putchar(ch);
	}
	fclose(fp);

	return 0;
}
