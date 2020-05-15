#include<stdio.h>

struct receiver {

	unsigned int parity : 1;
	unsigned int mode   : 1;
	unsigned int st_bit : 2;
	int data;

};

int main() {
	struct receiver mob_rec={1,1,2,200};

	if(mob_rec.parity==0) {

			printf("Works With EVEN Parity\n");

	} else {
		printf("Wroks With ODD parity\n");
	}

	if(mob_rec.mode==0) {
		
		printf("Sycnronous Data Transmission\n");

	} else {

		printf("Asycnronous Data Transmission\n");
		printf("start bit should be %d",mob_rec.st_bit);
	}
	return(0);
}
