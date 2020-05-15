#include<stdio.h>
/*
void bmain(){
	printf("bmain\n");
}

void amain(){
	printf("amain\n");
}

#pragma startup bmain

#pragma exit amain
*/
#define EMBEDDED
#ifndef EMBEDDED
	#error Code only for EMBEDDED
#endif



int main() {
	printf("main\n");

#ifdef EMBEDDED
	printf("EMBEDDED");
#else
	printf("this code will not be compiled");
#endif
	return (0);
}
