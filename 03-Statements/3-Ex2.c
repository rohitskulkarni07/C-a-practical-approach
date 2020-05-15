//leap year

#include<stdio.h>

int main() {
	
	int year;

	printf("Enter Year\n");
	scanf("%d",&year);
	
	if(((year%4)==0) && ((year%100)!=0) || ((year%400)==0)) {
		printf("Year %d is Leap-year",year);
	} else {
		printf("Year %d is Not a Leap-year",year);
	}
	return 0;
}
