#include<stdio.h>

struct  pad {
	char c1;
	int i1;
	char c2;
	float f1;	
//	int *iptr;
//	int arr[20];
};

int main() {

	struct pad var1;

	struct pad var2;

	if(var1==var2){
		printf("var1==var2\n");
	
	}else{

		printf("var1 not= var2\n");
	}

	return (0);

}
