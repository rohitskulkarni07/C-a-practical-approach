#include<stdio.h>

struct cord{
	int x;
	int y;
	int z;

}pt1={2,3,5},*ptr1; //pointer to structure in same declearation

int main() {

	struct cord pt2 = {4,5,6}; 
	struct cord *ptr2 = &pt2; //pointer to structure in seprate declearation

	ptr1 = &pt1;

	printf("address of pt1: %p \n",&pt1);
	printf("address of pt2: %p \n",&pt2);

	printf("address of ptr1: %p \n",&ptr1);
	printf("address of ptr2: %p \n",&ptr2);

	printf("ptr1 points to: %p \n",ptr1);
	printf("ptr2 points to: %p \n",ptr2);

	printf("Size of struct cord is: %ld\n",sizeof(struct cord));
	printf("Size of struct cord*(pointer) is: %ld\n",sizeof(struct cord*));

	printf("Size of pt1 %ld\n",sizeof(pt1));
	printf("Size of pt2 %ld\n",sizeof(pt2));

	printf("Size of ptr1 %ld\n",sizeof(ptr1));
	printf("Size of ptr2 %ld\n",sizeof(ptr2));

	
	return 0;

}
