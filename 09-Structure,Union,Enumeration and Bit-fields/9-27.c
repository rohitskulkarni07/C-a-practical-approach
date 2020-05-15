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

	union variables var = {'A',1,25.43,2.323};

	printf("______________________\n\n");
	printf("1st is %c\n",var.c);
	printf("2nd is %i\n",var.i);
	printf("3rd is %f\n",var.f);
	printf("4rt is %lf\n",var.d);
	printf("______________________\n\n");
}
