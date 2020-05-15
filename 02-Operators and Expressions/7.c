#include<stdio.h>

void main() {
	int olc,ilc,space;
	int count=0;
	for(olc=1;olc<=4;olc++) {
		for(space=1;space<=4-olc;space++) {
			printf(" ");
		}
		for(ilc=1;ilc<=olc;ilc++) {
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 7.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
   0
  12
 345
6789

*/
