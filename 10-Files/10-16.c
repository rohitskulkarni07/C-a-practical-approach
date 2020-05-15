#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char str1[20],str2[20];
	
	printf("Two different ways to read a string \n");
	printf("Enter String 1:\n");

	scanf("%19[^\n]%*c",str1);

	printf("No of char after using scanf is %d\n",stdin->_old_offset);
	fflush(stdin);

	printf("Enter String 2:\n");

	gets(str2);
	printf("No of char after using gets %d\n",stdin->_old_offset);
	printf("the string entered are :\n");
	printf("%s %s",str1,str2);

	fcloseall();
	return 0;

}

