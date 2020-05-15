#include<stdio.h>

print(int a){
	printf("valueofapassed%d",a);
	a+2;
	a+2;
}

int main() {
	int a=1;
	int b = print(a);
	printf("value of after call %d ",b);

	return 0;
}
