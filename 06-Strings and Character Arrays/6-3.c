//C-styled string are represented by const char*


#include<stdio.h>

int main() {
	printf("first character of \"xyz\" is %c\n",*"xyz");
	printf("Second character of \"xyz\" is %c\n",*("xyz"+1));

	return (0);
}
