#include<stdio.h>

int func(int a, int b);		// prototype scope

int c;	//global scope 

int main(){

//	printf("%ld",&e);
	func(10,10);
}

int e=0;	//limied global scope not visible to above function
int func(int f, int g){ 	//function scope

	printf(" address of e is %ld",e);

	int h;	//function scope

	return 0;
}


