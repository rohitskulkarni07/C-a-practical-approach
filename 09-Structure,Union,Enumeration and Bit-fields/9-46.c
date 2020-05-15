#include<stdio.h>

struct receiver{

	unsigned int parity :32; 	
	unsigned int mode   : 0;	/*  9-46.c:6:15: error: zero width for bit-field ‘mode’ unsigned int mode   : 0;*/
	unsigned int st_bit : 2;
	int data;

};

int main() {
	struct receiver r;
	return(0);
}
