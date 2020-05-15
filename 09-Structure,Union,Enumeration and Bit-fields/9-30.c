//initializatio of union object
//Multiple initailizatio not allowed
//accesing multiple values not allowed as elemts are pushed in overlapped fasion
//access only lastly assigned value gives correct result
//

#include<stdio.h>

union variables{

	char c;
	int i;
	float f;
	double d;

};

int main() {

	union variables var = {'A'};
	printf("1st is %c\n",var.c);

	var.i =  300;
	printf("2nd is %i\n",var.i);

	printf("3rd is %f\n",var.f);
	var.f =  2.5;
	printf("3rd is %f\n",var.f);

	var.d = 34.212;
	printf("4rt is %lf\n",var.d);
	
	printf("2nd is %i\n",var.i);
}
