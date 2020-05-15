//fclose

#include<stdio.h>

int main() {

	printf("Hello, This line is before flcose() \n");
	fclose(stdout);	//closing the stream which gives output on console/terminal i.e stdout stream standard output screen
	printf("This Line is after fclose()");

	return (0);

}
