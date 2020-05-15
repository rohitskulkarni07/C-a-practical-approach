#include<stdio.h>

int add(extern int a, extern int b);

int main() {
	
	extern int a =  100;
	
	printf("THe value of a is %d\n", a);
	
	int c = fun(10,20);

	printf("Addition of a and b is %d",c);

	return (0);
}
int add(extern int a, extern int b){

	return a + b;
	
}

//
//7-18.c: In function ‘main’:
//7-18.c:5:13: error: ‘a’ has both ‘extern’ and initializer
//extern int a =  100;
//
//7-19.c:17:20: error: storage class specified for parameter ‘a’
//int add(extern int a, extern int b){
//		     ^
//7-19.c:17:34: error: storage class specified for parameter ‘b’
//int add(extern int a, extern int b){
//
//                                 ^


