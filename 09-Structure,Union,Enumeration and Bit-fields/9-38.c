#include<stdio.h>

enum SWITCH{off,on};

int main() {

	enum SWITCH s1 = off;
	enum SWITCH s2 = s1, s3 = 0;

	printf("s1 = %d\n",s1);
	printf("s2 = %d\n",s2);
	printf("s3 = %d\n",s3);

	return (0);
}
