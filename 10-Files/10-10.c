#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp1, *fp2;
	char ch;
	
	fp1 =  fopen("abc.txt","r"); 	//opening in read  mode
	fp2 =  fopen("new.txt","w"); 	//opening in write mode

	if(fp1 == NULL||fp2 == NULL) {

		printf("Unable To OPen THe File");
		exit(1);

	}

	while(!feof(fp1)) {	//print all char from file to stdin
		ch = fgetc(fp1);
		fputc(ch,fp2);

	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}
