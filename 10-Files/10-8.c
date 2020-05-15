#include<stdio.h>
#include<stdlib.h>

/*	
 *  int fseek(FILE *stream, long offset, int whence);
 *
 *  The  fseek()  function  sets  the file position indicator for the stream pointed to by stream.  The new position, measured in bytes, is obtained by adding offset
 *  bytes to the position specified by whence.  If whence is set to SEEK_SET, SEEK_CUR, or SEEK_END, the offset is relative to the start of  the  file,  the  current
 *  position  indicator,  or  end-of-file,  respectively.   A  successful call to the fseek() function clears the end-of-file indicator for the stream and undoes any
 *  effects of the ungetc(3) function on the same stream
 *
*/


int main() {

	FILE *fp;
	char ch;
	
	fp =  fopen("abc.txt","r+"); 	//opening in update mode
	if(fp == NULL){
		printf("Unable To OPen THe File");
		exit(1);

	}

	fseek(fp,-10L,SEEK_END); //set position of pointer at towards 10 char left from end of the file
	fputc('1',fp);

	fseek(fp,0L,SEEK_SET); 	//set position of pointer to beginning of the file

	while((ch=fgetc(fp))!=EOF){	//print all char from file to stdin
		putchar(ch);
	}
	fclose(fp);

	return 0;
}
