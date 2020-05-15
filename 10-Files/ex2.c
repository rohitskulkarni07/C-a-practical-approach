#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp = NULL;
	char name[50]= {'\0'};
	char ch = NULL;
	int count = 0;

	printf("Ener The file name\n");
	gets(name);

	fp = fopen(name,"r");
	
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	}
	while((ch = fgetc(fp))!=EOF){
		if(ch==' '|| ch=='\t' || ch == '\n'){
			count++;
		}

	}
	printf("Word count: %d\n",count);

	fclose(fp);



	return (0);
}
