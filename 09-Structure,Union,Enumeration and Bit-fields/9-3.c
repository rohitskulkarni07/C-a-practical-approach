#include<stdio.h>

struct point{
	int x;
	int y;
	
};

int main() {

	struct point pt = {2,2};	
	pt.x = 4;
	pt.y = 5;

}

/*
 
9-3.c: In function ‘main’:
9-3.c:10:7: error: assignment of member ‘x’ in read-only object
  pt.x = 4;
       ^
9-3.c:11:7: error: assignment of member ‘y’ in read-only object
  pt.y = 5;


*/
