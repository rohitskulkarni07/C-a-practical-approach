//setvbuf()
//
#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char arr[30];

	setvbuf(stdout,arr,_IONBF,30);
	puts("Fairways are narrow");
	
	fflush(stdout);	
	
	puts("You Have TO walk down");
	puts("Them in a single file");

	fclose(stdout);
}
