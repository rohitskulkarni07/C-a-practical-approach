#include<stdio.h>
#include<stdlib.h>


int main() {
		
	FILE *fp;		//file pointer
	char ch;

	fp = fopen("test1.txt","r"); 	//opening file in read mode

	if(fp ==NULL){	//if fopen is failed
		printf("Unable to open file\n");
		exit(1);
	}
	else{
		
		while((ch=fgetc(fp))!=EOF) { //remove bracets and try ???
			printf("%c",ch);
		}
		fclose(fp);

	}
	return (0);


}
