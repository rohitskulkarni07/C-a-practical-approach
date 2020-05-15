#include<stdio.h>

int add(int,int);
int main() {
	int a,b,c;
	a=10;
	b=20;

	c = add(a,b);
	
	printf(" %d ",c);
	add(int a,int b) {
		return a+b;
	}
	return 0;

}
