#include<stdio.h>
int main() {
	int i = 0,j = 1, k = 2,l;

	l= i&&j++&&k++; //evaluated as => (i&&j++)&&k++
			//             => (0&&1) = 0
			//             => 0&&k++ = 0	
	printf("%d %d %d %d",i,j,k,l);
}

//output
//
//0 1 2 0

