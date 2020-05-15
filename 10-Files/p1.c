#include<stdio.h>

int main(int argc,char **argv){

	char ch;
	FILE *fp;
	FILE *fp1;

	fp= fopen(argv[1],"w");
	
	printf("%s\n",argv[1]);
	printf("size of file pointer \n");
	printf("%ld\n",sizeof(fp));
	
	printf("size of file structure\n");
	printf("%ld\n",sizeof(FILE));
	
	printf("data I/p:\n");

	while((ch=getchar())!='\n'){
		putc(ch,fp);
	}
	putc(EOF,fp);
	putc(EOF,fp);
	putc(EOF,fp);
	putc(EOF,fp);

	printf("Data O/p:\n");
	fclose(fp);

	fp1=fopen(argv[1],"r+");
	while((ch=fgetc(fp1))!=EOF){
		printf("%c",ch);
	}
	fclose(fp1);
	return 0;
}
