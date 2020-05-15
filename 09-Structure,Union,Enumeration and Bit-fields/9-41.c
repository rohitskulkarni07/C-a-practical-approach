#include<stdio.h>

enum SWITCH {off,on};

int main() {

	enum SWITCH s1 = on,s2;
	//num SWITCH s2 = on;
	s1=s2;

	if(s1==s2){

		printf("same\n");
	}else{
	
		printf("different\n");
	}
	
	return(0);

}
