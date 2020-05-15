#include<stdio.h>

enum SWITCH {off,on};

int main() {

	enum SWITCH s = on;

	printf("s1 address : %p\n",&s);
//	printf("enum SWITCH address : %p\n",&enum SWITCH);
	
	return(0);

}
