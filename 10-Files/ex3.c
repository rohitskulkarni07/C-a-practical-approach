#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp1,*fp2;

	char name1[50];
	char name2[50];

	char ch1,ch2;

	puts("Enter FIle Name1");
	gets(name1);
	fp1 = fopen(name1,"r");

	puts("ENter FIle name2");
	gets(name2);
	fp2 = fopen(name2,"r");


	if(fp1==NULL || fp2==NULL){
		printf("Unable to open file");
		exit(1);

	}
		
	while(((ch1=fgetc(fp1))!=EOF)&&((ch2=fgetc(fp2))!=EOF)){
		if(ch1!=ch2){
			puts("File Content is differ");
			
			exit(0);
		}
	}

	puts("Content is same");
	fcloseall();
}
