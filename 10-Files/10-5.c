//copy from one file to another file

#include<stdio.h>
#include<stdlib.h>


int main() {
		
	FILE *fp1,*fp2;	//file pointer
	char ch;
	
	fp1 = fopen("test1.txt","r"); 	//opening file in read mode
	fp2 = fopen("test2.txt","w"); 	//opening file in write mode


	if(fp1 ==NULL || fp2 == NULL){	//if fopen is failed
		printf("Unable to open files\n");
		exit(1);
	}
	else{
		
		while((ch=fgetc(fp1))!=EOF) { 		
			fputc(ch,fp2);
		}
		fcloseall();

	}
	return (0);


}
