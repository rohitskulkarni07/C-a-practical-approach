/*
 * fgetpos, fseek, fsetpos, ftell, rewind - reposition a stream
 * 
 * int fseek(FILE *stream, long offset, int whence);
 *
 * long ftell(FILE *stream);
 *
 * void rewind(FILE *stream);
 *
 * int fgetpos(FILE *stream, fpos_t *pos);
 *
 * int fsetpos(FILE *stream, const fpos_t *pos);
*/


#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main() {

	FILE *fp1, *fp2;
	char ch;
	long int loc1, loc2;
	
	fpos_t p1,p2;

	fp1 = fopen("test1.txt","r");
	fp2 = fopen("test2.txt","a");

	if(fp1==NULL || fp2==NULL){
		printf("Unable To open files\n");
		exit(0);

	}

	loc1 = ftell(fp1);
	loc2 = ftell(fp2);

	printf("Initial Value Of fp1 = %ld,  fp2 = %ld\n",loc1,loc2);

	ch = fgetc(fp1);
	fputc('!',fp2);

	loc1 = ftell(fp1);
        loc2 = ftell(fp2);

	printf("After value of fp1 = %ld , fp2 = %ld\n",loc1,loc2);
	
	ch = fgetc(fp1);
        fputc('!',fp2);
	
	fgetpos(fp1,&p1);
	fgetpos(fp2,&p2);

	printf("After value of fp1 = %ld , fp2 = %ld\n",loc1,loc2);


	fcloseall();
	 
	return 0;
}
