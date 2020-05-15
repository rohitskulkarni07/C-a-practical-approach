#include<stdio.h>

#pragma pack(1)
/*
#pragma pack(2)
#pragma pack(3)
#pragma pack(4)
#pragma pack(5)
#pragma pack(6)
#pragma pack(7)
#pragma pack(8)
*/

struct  pad {
	char c1;
	int i1;
	char c2;
	float f1;	
//	int *iptr;
//	int arr[20];
};

int main() {

	struct pad var;

	printf("size of struct pad is %ld\n",sizeof(struct pad));
	printf("size of object var is %ld\n",sizeof(var));

	return (0);

}
