#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE *fp;
	char str[50], *p;

	fp = fopen("abc.txt","r");
	p  = fgets(str,35,fp);

	puts(str);

	p  = fgets(str,15,fp);
	puts(str);
	
	p  = fgets(str,15,fp);
	puts(str);

	p  = fgets(str,50,fp);
	puts(str);

	p  = fgets(str,10,fp);
	puts(str);

	fclose(fp);

	return 0;
}

