//accessing structure member via pointer to structure

#include<stdio.h>

struct cord{

	int x,y,z;
};

int main() {
	
	struct cord pt1 = {2,3,4};
	struct cord *ptr1 =  &pt1;

	printf("co-ordinates of pt1 are pt1(%d,%d,%d)\n",(*ptr1).x,(*ptr1).y,(*ptr1).z);
	printf("co-ordinates of pt1 are pt1(%d,%d,%d)\n",ptr1->x,ptr1->y,ptr1->z);
		

	return 0;	
}
