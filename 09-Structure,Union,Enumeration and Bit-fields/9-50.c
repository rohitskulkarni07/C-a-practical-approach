//size of ***un-named*** bit fields
//
#include<stdio.h>

struct receiver{

	unsigned int parity :32; 
	int 		    : 0;
	unsigned int st_bit : 2;
	int data;

};

int main() {
	
	struct receiver r;

	printf("size of r : %ld\n",sizeof(struct receiver));	//valid
	printf("size of r : %ld\n",sizeof(r));			//valid
	
	return(0);
}

