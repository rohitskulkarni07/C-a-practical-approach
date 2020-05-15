#include<stdio.h>

void main() {
	int olc,ilc,space;
	char ch='A';
	for(olc=1;olc<=4;olc++) {
		for(space=1;space<=olc-1;space++) {
			printf(" ");
		}
		for(ilc=4;ilc>=olc;ilc--) {
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 8.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
ABCD
 EFG
  HI
   J

*/
