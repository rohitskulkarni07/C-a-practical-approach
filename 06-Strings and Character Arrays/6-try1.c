/*
1.Write a program which accept sentence from user and print that sentence.   

	Input : My name is   Output : My name is
*/
#include<stdio.h>

void main() {
	char name[100];		//Charachter array of Of Size 100

	printf("Enter Your Name :");
	scanf("%[^\n]",name);		//To Take Input From User Until It Encounters \n
	
	printf("Your Name Is %s\n",name);
}
