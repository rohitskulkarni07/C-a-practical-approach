#include<stdio.h>

int main() {
	int arr1[5],arr2[5]={1,2,3,4,5};
	arr1=arr2;
	return (0);

}
/*
4-5.c: In function ‘main’:
4-5.c:5:6: error: assignment to expression with array type
  arr1=arr2;
      ^
*/
