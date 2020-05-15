//string n-copy USER DEFINE FUNCTION

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* mystrncpy(char*,char*,int n);

int main() {

        char src[50] ;
        char dest[50] ;
	int n;

        puts("Enter Source string");
        fgets(src,50,stdin);

	puts("Enetr Number of char to copy");
	scanf("%d",&n);


        mystrncpy(dest,src,n);

        puts("destination string is");
        puts(dest);

        return (0);
}

char* mystrncpy(char* dest,char* src,int n){

        int i=0;

       while(i<n) {

                dest[i]=src[i];
                i++;
        }
        dest[i] = '\0';         //'\0' (null charachter at the last);
        return dest;

}

