#include<stdio.h>

int main() {
	
	char name[20];
	char name2[20];

	printf("Enter Name:\t");
	scanf("%s",name);
	printf("Enter Name:\t");
	scanf("%s",&name2);
	printf("Your Name:\t%s",name);
	printf("Your Name:\t%s\n",name2);
	return 0;
}
