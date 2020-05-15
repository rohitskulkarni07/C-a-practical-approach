#include<stdio.h>

enum SHAPES{triangle=3,quadrilateral,pentagon,hexagon};

int main() {	

	enum SHAPES s1 = triangle,s2 = quadrilateral,s3;

	printf("Vertices in s1 %d\n",s1);
	printf("Vertices in s2 %d\n",s2);
	printf("Total Vertices %d\n",s1+s2);
	printf("Vertices in s3 %d\n",s3=2*s1);

	return 0;

}
