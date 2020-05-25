#include <stdio.h> // header file

int main(void) {

	//variable Declearation and assignment at the same time

	int i = 5;				//int type
	float f = 3.99f;			//float type
	double d = 8.0411997;	//double type
	char c = 'A';			//character type

	//code
	printf("\n\n"); //print 2 new lines

	printf("i = %d\n", i);	// %d decimal
	printf("f = %f\n", f);	// %f  06 Number with fractional part value { float value does not round off the orignal value }
	printf("d = %lf\n", d); // %lf 10 significant digit with fractional part value { double round off the orignal value }
	printf("c = %c\n", c);  // %c character literal
	
	printf("\n\n");

	//assignment
	i = 43;
	f = 6.54f;
	d = 26.1294;
	c = 'p';

	printf("i = %d\n", i);
	printf("f = %f\n", f);
	printf("d = %lf\n", d);
	printf("c = %c\n", c);

	printf("\n\n");

	//statement (keyword)
	return(0);
}
