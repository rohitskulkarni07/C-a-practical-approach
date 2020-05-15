#include<stdio.h>

void main() {
	int olc,ilc;
	int count=40;

	for(olc=1;olc<5;olc++) {
		for(ilc=1;ilc<6-olc;ilc++) {
			printf("%d ",count);
			count=count-4;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 5.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
40 36 32 28 
24 20 16 
12 8 
4 

*/
