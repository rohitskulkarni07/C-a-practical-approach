#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp1,*fp2;
	char ch;
	
	fp1 = fopen("abc.txt","r");
	fp2 = fopen("cde.txt","w");

	if(fp1==NULL || fp2==NULL){
		printf("Unable to open file");
		exit(1);

	}

	while((fp1->_flags & 0X0020)!= 0x0020){
		
		ch =  fgetc(fp1);
		
		if((fp1->_flags & 0x0020)!=0x0020){
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return (0);
}
