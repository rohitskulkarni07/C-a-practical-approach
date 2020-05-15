#include<stdio.h>

void main() {
	int olc,ilc;
	int count=1;

	for(olc=1;olc<=4;olc++) {
		for(ilc=1;ilc<=5-olc;ilc++) {
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 4.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
1 2 3 4 
5 6 7 
8 9 
10 

*/
