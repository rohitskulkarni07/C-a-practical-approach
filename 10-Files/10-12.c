#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp;
	int i;

	char str[50], *p;

	fp = fopen("abc.txt","w");
	if(fp ==NULL){
		printf("Unable to open files\n");
		exit(0);
	}

	p  = fgets(str,35,fp);
	i = fputs("HEllo readers",fp);
	printf("Value Returned by fputs is  %d\n",i);
	
	fclose(fp);

	return 0;
}

