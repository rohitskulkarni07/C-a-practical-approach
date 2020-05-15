#include <stdio.h>

void main() {
	int olc,ilc,space,count=1;

	for(olc=1;olc<=5;olc++) {

		for(space=1;space<=5-olc;space++) {
				printf("\t");		
		}

		for(ilc=1;ilc<=olc;ilc++) {
			
			printf("%d\t",count);
			count=count+2;
		}
		printf("\n");
	}
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 9.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
				1	
			3	5	
		7	9	11	
	13	15	17	19	
21	23	25	27	29	

*/
