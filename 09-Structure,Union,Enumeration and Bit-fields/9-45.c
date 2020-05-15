#include<stdio.h>

struct receiver{

	unsigned int parity :33; 	/*9-45.c:5:15: error: width of ‘parity’ exceeds its type unsigned int parity :33;  */
	unsigned int mode   : 1;
	unsigned int st_bit : 2;
	int data;

};

int main() {
	struct receiver r;
	return(0);
}
