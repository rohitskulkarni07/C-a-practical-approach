#include<stdio.h>

void main() {
	int olc,ilc;
	char ch = 'A';

	for(olc=1;olc<=5;olc++) {
		for(ilc=1;ilc<=olc;ilc++) {
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 2.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
A 
B C 
D E F 
G H I J 
K L M N O 

*/
