#include<stdio.h>
#include<stdlib.h>

struct Book {
	char title[25];
	char author[25];
	int pages;
	float price;
};

int main() {

	struct Book b1,b2;
	char str1[9];
	char str2[9];

	printf("Enter Title ,Author ,Pages ,Price of The 1st Book \n");

	fgets(b1.title,25,stdin);
	fgets(b1.author,25,stdin);
	fgets(str1,9,stdin);
	fgets(str2,9,stdin);

	b1.pages = atoi(str1);
	b1.price = atof(str2);


	printf("Enter Title ,Author ,Pages ,Price of The 2nd Book \n");

        fgets(b2.title,25,stdin);
        fgets(b2.author,25,stdin);
        fgets(str1,9,stdin);
        fgets(str2,9,stdin);

        b2.pages = atoi(str1);
        b2.price = atof(str2);

	printf("Both Book Price are increased by 100rs\n");

	b1.pages+=100;
	b1.price =(float) b1.price +(float) 100;
	b2.pages+=100;
	b2.price =(float) b2.price +(float) 100;

	printf("Book: %s\n",b1.title);
	printf("Author: %s\n",b1.author);
	printf("pages: %d\n",b1.pages);
	printf("price: %f\n",b1.price);

	printf("Book: %s\n",b2.title);
        printf("Author: %s\n",b2.author);
        printf("pages: %d\n",b2.pages);
        printf("price: %f\n",b2.price);

	return(0);

}
