//size of bit fields
//
#include<stdio.h>

struct receiver{

	unsigned int parity :32; 
	unsigned int mode   : 1;
	unsigned int st_bit : 2;
	int data;

};

int main() {
	
	struct receiver r;

	printf("size of r : %ld\n",sizeof(struct receiver));	//valid
	printf("size of r : %ld\n",sizeof(r));			//valid
	printf("size of r.parity : %ld\n",sizeof(r.parity));			//invalid

	return(0);
}
/*
 *9-49.c: In function ‘main’:
9-49.c:20:42: error: ‘sizeof’ applied to a bit-field
  printf("size of r.parity : %ld\n",sizeof(r.parity));   //valid

 * */
