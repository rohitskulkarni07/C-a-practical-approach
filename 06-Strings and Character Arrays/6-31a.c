//occurence of substring Using library function

#include<stdio.h>
#include<string.h>

int main() {

	char str1[20];
	char str2[20];
	char *ptr;

	
	puts("Enter String ");
	fgets(str1,20,stdin);

	puts("Enter sub-string to be found");
	fgets(str2,20,stdin);

	ptr = strstr(str1,str2);
	
	if(ptr==NULL){
	
		puts("String Not Found");
	}else{	
		printf("substring %s is found in string %s \n",str2,ptr);
		printf("@index: %ld",ptr-str1);
	}

}
