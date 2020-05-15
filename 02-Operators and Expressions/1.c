#include<stdio.h>

void main(){
	int i,j;
	for(i=1;i<=5;i++){

		for(j=1;j<=i;j++){

			printf("* ");
		}
		printf("\n");
	}	
}
/*
rohit@rohit-XPS-15-9560:~/C/23June2018$ gcc 1.c 
rohit@rohit-XPS-15-9560:~/C/23June2018$ ./a.out 
* 
* * 
* * * 
* * * * 
* * * * * 

*/
