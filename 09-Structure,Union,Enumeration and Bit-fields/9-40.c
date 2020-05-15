#include<stdio.h>

enum SWITCH {off,on};

int main() {

	enum SWITCH s = on;

	printf("s1 size : %p\n",sizeof(s));
	printf("enum SWITCH size : %p\n",sizeof(enum SWITCH));
	
	return(0);

}
