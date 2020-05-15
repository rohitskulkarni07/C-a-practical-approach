#include<stdio.h>
#include<stdlib.h>

#define MAXBOOKS 5

struct Book {
	char title[25];
	char author[25];
	int pages;
	float price;
}books[MAXBOOKS];

int main() {

	char str1[9];
	char str2[9];
	
	int count = 0;

	printf("Enter Title ,Author ,Pages ,Price of The 1st Book \n");

	while(count < MAXBOOKS){

		fgets(books[count].title,25,stdin);
		fgets(books[count].author,25,stdin);
		fgets(str1,9,stdin);
		fgets(str2,9,stdin);

		books[count].pages = atoi(str1);
		books[count].price = atof(str2);

		count++;
		if(count==5){
			printf("*** NO MORE SPACE ***\n");
			break;
		}

	}
	
	printf("*** ALL BOOKS ***\n");
	count =0;

	while(count<MAXBOOKS){
	

		printf("Book: %s\n",books[count].title);
		printf("Author: %s\n",books[count].author);
		printf("pages: %d\n",books[count].pages);
		printf("price: %f\n",books[count].price);

		count++;
		if(count==5){
			printf("*** THATS ALL FOR NOW ***\n");
			break;
		}

	}


	return(0);

}
