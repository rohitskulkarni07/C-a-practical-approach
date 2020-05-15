//pointer to an array
//or
//such a pointer who holds the address of an array

#include<stdio.h>

int main() {
	//array of 5 int
	int arr[5] = {1,2,3,4,5};

	//both are tottaly different

	//pointer to an array of 5 int
	int (*ptr)[5];

	//simple int pointer
	int *ip;
	
	//points to first element in array
	ip = arr;
	
	//points to the whole array (base address)
	ptr =&arr;

	//address of first elememtn in array = base address
	printf("%p\n",arr)
		;
	//address of first elememtn in array = base address
	printf("%p\n",&arr);

	//first element in array
	printf("%d\n\n",*arr);
	
	//ptr holds is base address of arr
	printf("%p %ld\n",*ptr,sizeof(*ptr));

	//actual address of ptr
	printf("%p\n\n",&ptr);

	//address of first element which ptr is now pointing = base address of arr 
	//increamienting ptr each time will add 5*20 to the base address
	printf("%p %ld \n",ptr+0,sizeof(ptr+0));
	printf("%p\n",ptr+1);
	printf("%p\n",ptr+2);
	printf("%p\n",ptr+3);
	printf("%p\n",ptr+4);
	printf("%p\n\n",ptr+5);

	//address of each elements in array
	printf("%p %ld\n",(*ptr+0),sizeof(*ptr+0));
	printf("%p\n",(*ptr+1));
	printf("%p\n",(*ptr+2));
	printf("%p\n",(*ptr+3));
	printf("%p\n",(*ptr+4));
	printf("%p\n\n",(*ptr+5));


	printf("%d\n",(*(*ptr+0)));
	printf("%d\n",(*(*ptr+1)));
	printf("%d\n",(*(*ptr+2)));
	printf("%d\n",(*(*ptr+3)));
	printf("%d\n",(*(*ptr+4)));
	printf("%d\n",(*(*ptr+5)));
}
