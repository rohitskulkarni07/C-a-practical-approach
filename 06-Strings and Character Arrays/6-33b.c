//string n-concat USER DEFINE function

#include<stdio.h>
#include<string.h> //for strlen()

char* mystrncat(char*,char*,int);

int main() {
	
	char str1[50];
	char str2[50];
	int  n;

	puts("Enter 1st String ");
	fgets(str1,50,stdin);
	int len1=strlen(str1);
	str1[len1+1]='\0';
	puts("Enter String to be n-concat");
	fgets(str2,50,stdin);
	int len2 = strlen(str2);
	str2[len2+1]='\0';
	puts("Enter THe Value of n");
	scanf("%d",&n);

	mystrncat(str1,str2,n);

//	puts("Final string is");
	printf("%s",str1);

	return (0);
}

char* mystrncat(char* str1,char* str2,int n){

	int i=0;
	int len = strlen(str1);

	for(i=0;i<n&&str1[i]!='\0';i++){
		str1[len+i] = str2[i];
	}
	str1[len+i] = '\0';

	return str1;
	
}

