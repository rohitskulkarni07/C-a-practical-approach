#include<stdio.h>

static int a = 10; // file scope internal linkage

extern int fun() {

	printf("value of a is %d \n",a);	

	return 0;

}
