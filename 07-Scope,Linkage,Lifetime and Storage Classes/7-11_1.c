#include<stdio.h>

extern int fun();		//by default function scope and global variable scope is "extern"


int main() {
	
	extern int a;
	printf("In main value a of is %d\n",a);

	fun();
	return 0;
}
int a = 20;
