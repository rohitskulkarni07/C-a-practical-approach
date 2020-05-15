//varible number of argument
//va_args
//va_list
//va_start
//va_end
//ellipses
//

#include<stdio.h>
#include<stdarg.h>
int sum(int, ...);


int main()  {
	
	int result = 0;

	result = sum(2,2,3);
	printf("result: %d \n",result);

	result = sum(5,4,3,1,2,3);
	printf("result: %d \n",result);

}

int sum(int n,...) {
	int arg;
	int total = 0;
	int i = 0;
	
	va_list ptr;
	va_start(ptr,n);
	arg = va_arg(ptr,int);
	
	while(i++<n){
		total += arg;
		arg = va_arg(ptr,int);
	}
	va_end(ptr);
	return (total);


}
