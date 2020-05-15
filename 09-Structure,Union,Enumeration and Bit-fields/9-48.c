//address of bit fields
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

	printf("Address of r : %p\n",&r);
	printf("Address of r : %p\n",&r.parity);
	printf("Address of r : %p\n",&r.mode);
	printf("Address of r : %p\n",&r.st_bit);
	printf("Address of r : %p\n",&r.data);

	return(0);
	
}

/*
              
9-48.c: In function ‘main’:
9-48.c:19:31: error: cannot take address of bit-field ‘parity’
  printf("Address of r : %p\n",&r.parity);
                               ^
9-48.c:20:31: error: cannot take address of bit-field ‘mode’
  printf("Address of r : %p\n",&r.mode);
                               ^
9-48.c:21:31: error: cannot take address of bit-field ‘st_bit’
  printf("Address of r : %p\n",&r.st_bit);
                               ^

*/
