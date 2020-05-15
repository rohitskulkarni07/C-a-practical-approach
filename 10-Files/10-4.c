//writing to file
#include<stdio.h>
#include<stdlib.h>


int main() {
		
	FILE *fp;		//file pointer
	char str[255];
	int i = 0;

	fp = fopen("test1.txt","w"); 	//opening file in read mode

	if(fp ==NULL){	//if fopen is failed
		printf("Unable to open file\n");
		exit(1);
	}
	else{
		printf("ENter String You Want to write to file\n");
		gets(str);
		
		while(str[i]!='\0') { 		
			fputc(str[i++],fp);
		}
		fclose(fp);

	}
	return (0);


}
