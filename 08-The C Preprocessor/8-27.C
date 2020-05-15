
//line Directive

#include<stdio.h>

int main() {
	
	printf("LINE: %d FILE: %s\n",__LINE__,__FILE__);

	#line 200
	printf("LINE: %d FILE: %s\n",__LINE__,__FILE__);

	#line 100 "abc.c"
	printf("LINE: %d FILE: %s\n",__LINE__,__FILE__);

	
	return 0;

}
