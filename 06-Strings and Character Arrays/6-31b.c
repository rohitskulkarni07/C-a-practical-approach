//occurence of given substring Using USER DEFINE function

#include<stdio.h>

char* mystrstr(char*,char*);

int main() {

	char str1[20];
	char str2[20];

	char *ptr;

	
	puts("Enter String ");
	fgets(str1,20,stdin);

	puts("Enter Character to be found");
	fgets(str2,20,stdin);

	ptr = mystrstr(str1,str2);
	
	if(ptr==NULL){
	
		puts("Character Not Found");
	}else{
		printf("index: %ld",ptr-str1);
		printf("substring %s is found in %s",str2,ptr);
	}

}
char* mystrstr(char* str1,char* str2){
	int i=0,j=0,k;

	while(str1[i]!='\0') {
		
		k=i;

		while(str2[j]!='\0') {

			if(str1[k]!=str2[j]){
				puts("break");
				break;

			}
			k++;
			j++;
			printf("k=%d  j=%d  i=%d",k,j,i);
		}
		if(str2[j]=='\0'){
			return (char*)str1+i;
		} else {
			i++,j=0;
		}
	}
	return NULL;
}
