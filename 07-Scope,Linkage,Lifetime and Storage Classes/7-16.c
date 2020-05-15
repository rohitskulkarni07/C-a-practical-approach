#include<stdio.h>

void fun(int );

int main() {

	int i = 0;
	
	for(i=0;i<=5;i++){
		fun(i);
	}
	
	return (0);
}

void fun(int i){

	static int a =  10;
	printf("the value of an a  at entry is %d is %d\n",i,a);
	printf("The Value of a after increament is %d \n", ++a);

}
