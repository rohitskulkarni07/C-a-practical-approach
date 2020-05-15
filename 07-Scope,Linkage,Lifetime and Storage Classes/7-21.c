#include<stdio.h>
#include<stdlib.h>

int main(){	

	float *f_ptr;
	
	f_ptr =(float*) malloc (sizeof(float));
	
	*f_ptr = 33.10;
	
	printf("THe Value within bloack is \n %f ",*f_ptr);
	
	return (0);
}
