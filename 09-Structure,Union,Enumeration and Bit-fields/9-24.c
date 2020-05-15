#include<stdio.h>

struct point {

	int x;
	int y;

};

void reflect(struct point*);

int main() {
	
	struct point pt;
	printf("Enter THe point\n");
	scanf("%d %d",&pt.x,&pt.y);

	reflect(&pt);
	
	printf("value in Main %d %d\n",pt.x,pt.y);

	return (0);
}

void reflect(struct point* pt){

	int temp;

	temp = pt->x;
	pt->x = pt->y;
	pt->y = temp;

	printf("value in reflect function %d %d\n",pt->x,pt->y);
}
