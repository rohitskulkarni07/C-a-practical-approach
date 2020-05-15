#include<stdio.h>

struct  pad {
	char c1;
	int i1;
	char c2;
	float f1;	
};

int main() {

	struct pad var;

	printf("size of struct pad is %ld\n",sizeof(struct pad));
	printf("size of object var is %ld\n",sizeof(var));

	return (0);

}
