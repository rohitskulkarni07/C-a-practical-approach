#include<stdio.h>

struct Emp{
	int emp;
	char *arr;
	double sal;
}emp;

int main() {
//	printf("Employee: %ld\n",sizeof(Emp));
	printf("Employee: %ld\n",sizeof(emp));

	return(0);
}
