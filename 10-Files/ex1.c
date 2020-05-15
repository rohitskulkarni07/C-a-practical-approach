#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp = NULL;
	char name[50] = {'\0'};

	int count = 0;

	printf("Ener The file name\n");
	gets(name);

	fp = fopen(name,"r");
	
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	}
	while(fgetc(fp)!=EOF){
		count++;
	}
	printf("character count: %d\n",count);

	fclose(fp);



	return (0);
}
