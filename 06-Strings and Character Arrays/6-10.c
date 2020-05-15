//read upto \n
#include<stdio.h>

int main() {
	
	char name[20];
	printf("ENger Name\n");

	scanf("%[^\n]",name);
	printf("name: %s\n",name);

	return (0);
}
