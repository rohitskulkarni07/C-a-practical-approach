#include<stdio.h>

struct Employee{	//Globally Declearation of Struct reserves 1 byte memory
			//Until and unless Obeject is not Created Memory is Not Get reserved.
	int id;		
	char *name;
//	char *name1="Rohit";// error: expected ‘:’, ‘,’, ‘;’, ‘}’ or ‘__attribute__’ before ‘=’ token  char *name1="Rohit"
//					initialization itelf in a struct is not allowed

	char gender;

};
void main(){

	struct Employee obj1={4,"bajarangi",'M'};
	printf("%d \n%s \n%c",obj1.id,obj1.name,obj1.gender);
}
