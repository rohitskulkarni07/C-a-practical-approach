#include<stdio.h>

static struct point {
	int arr[25];
	char str[25];
	
};

int main() {

	
	return (0);
}
/*
 // *** if no object is created ***
 9-2.c:12:1: warning: unnamed struct/union that defines no instances
 } ;
 ^
rohit@rohit-XPS-15-9560:~/C/chap9$ vi 9-2.c
rohit@rohit-XPS-15-9560:~/C/chap9$ cc 9-2.c 

// *** if size is not given ***
9-2.c:4:6: error: flexible array member not at end of struct
  int arr[]
 ^ 
 //  *** if struct is static and no object created at same time ***
9-2.c:7:1: warning: useless storage class specifier in empty declaration
 }; ^

 
 * */
