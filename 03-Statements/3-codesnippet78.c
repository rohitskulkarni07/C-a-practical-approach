#include<stdio.h>

int main() {

	int a = 3;

	goto lable;
	for(a=0;a<5;a++){

		lable:
			printf("%d",a);
	}
	return (0);

}
