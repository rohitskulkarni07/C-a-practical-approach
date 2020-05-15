//C-styled string are represented by const char*
//error: lvalue required as increment operand
//printf("Second character of \"xyz\" is %c\n",*("xyz")++);
                                                       ^~


#include<stdio.h>

int main() {
	printf("first character of \"xyz\" is %c\n",*"xyz");
	printf("Second character of \"xyz\" is %c\n",*("xyz")++);

	return (0);
}
