#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]) {
	
	FILE *fp1,*fp2;
	char ch;

	if(argc<3){
	
		printf("Usage: filecopy sourcefile destinationfile\n");
		exit(1);

	}

	fp1 = fopen(argv[1],"r");

	fp2 = fopen(argv[2],"w");

	if(fp1==NULL || fp2 ==NULL){
		printf("Unable to open\n");
		printf("Cannot continue...\n");
		exit(1);
	}

	while(((ch=fgetc(fp1))!=EOF)){
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	
	return (0);

} 
