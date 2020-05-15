//________________________
//
//	phonebook
//________________________
//
//	Header
//________________________

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct name       {

	char fname[20];
	char lname[20];

}NAM;

typedef struct contact    {

	char landline[12];
	char   mobile[12];

}CON;

typedef struct phoneentry {
	
	NAM pname;
	CON pcontact;

}PENT;
//____________________________________
//	
//	prototype
//_____________________________________

void printmenu    (                       );
void addrecord    (PENT book[], int* count);
int  deleterecord (PENT book[], int* count);
void listrecord   (PENT book[], int  count);
void searchrecord (PENT book[], int  count);

int main() {

	char ch;
	int delete;
	int count = 0;
	PENT book[50];

	system("clear");

	while(1) {

		printf("\n\t****** PHONEBOOK *****\n");
		printmenu();
		printf("Enter The Choice:\t");
		scanf("%1[^\n]%*c",&ch);
		switch(ch) {
			case 'a':
			case 'A':
				addrecord(book,&count);
				break ;
			case 'b':
			case 'B':
				delete = deleterecord(book,&count);
				if(delete==1)
				printf("Unsuccessfull!!!\n");
				break ;
			case 'c':
			case 'C':
				searchrecord(book,count);
				break ;
			case 'd':
			case 'D':
				listrecord(book,count);
				break ;
			case 'e':
			case 'E':
				break ;
			default:
				printf("\t*** INVALID OPTION ***\n");
				exit(1);
		}
		system("clear");

	}

	return (0);
}

void printmenu( ) {
	
	printf("________________________________________\n\n");
	printf("A.Press A to add    record  in phonebook\n");
	printf("B.Press B to delete record  in phonebook\n");
	printf("C.Press C to search record  in phonebook\n");
	printf("D.Press D to list   records in phonebook\n");
	printf("E.Press E to exit ...	                \n");
	printf("________________________________________\n\n");

}

void addrecord    (PENT book[],int* count) {

	char ch;

	system("clear");

	printf("\n\t\t*************\n");
	printf("\n\t\t ADD RECORDS \n");
	printf("\n\t\t*************\n");

	printf("Enter The First Name of The Person:\t");
	scanf("%19[^\n]%*c",book[*count].pname.fname);

	printf("Enter The Last  Name of The Person:\t");
	scanf("%19[^\n]%*c",book[*count].pname.lname);

	printf("Enter The Landline Number:\t");
	scanf("%19[^\n]%*c",book[*count].pcontact.landline);

	printf("Enter The Mobile   Number:\t");
	scanf("%19[^\n]%*c",book[*count].pcontact.mobile);

	(*count++);

	printf("\n\t\tRecord Entered Successfully!!!\n");
	/*

	printf("Do you want enter more records (Y/N)\n");
	scanf("%1[^\n]%*c",&ch);

	if(ch=='Y'||ch=='y'){
		addrecord(book,count);
	} else {
		return;
	}
	*/


}

void listrecord   (PENT book[],int  count) { 

	int i=0;

	system("clear");

        printf("\n\t\t***************\n");
        printf("\n\t\t LIST RECORDS  \n");
        printf("\n\t\t***************\n");
	
	printf("\n%-4s %-20s %-20s %-12s %-12s\n","S.No","First Name","Last Name","Landline No","Mobile No");
	printf("__________________________________________________________________________________________");
	while(i<count){

		printf("%-4d %-20s %-20s %-12s %-12s\n",i,book[i].pname.fname,book[i].pname.lname,book[i].pcontact.landline,book[i].pcontact.mobile);
		i++;

	}
	printf("TOTOAL: %d",i+1);
	printf(" Records Found");
	printf("__________________________________________________________________________________________");



}

void searchrecord (PENT book[],int  count) {
	
	char ch;
	char key[25];

	int  i	   = 0;
	int  found = 0;
	int  no	   = 0;

        system("clear");

        printf("\n\t\t*************\n");
        printf("\n\t\t ADD RECORDS \n");
        printf("\n\t\t*************\n");
	
	printf("\t\tA.Search by First  name\n");
	printf("\t\tB.Search by Last   name\n");
	printf("\t\tC.Search by mobile number\n");
	printf("\t\tD.Search by landline  number\n");

	printf("Enter The Choice:\t");
	scanf("%1[^\n]%*c",&ch);

	switch(ch){
	
		case 'a':
		case 'A':
			printf("Enter The First Name of The Person:\t");
		        scanf("%25[^\n]%*c",key);
				
			while(i<count){
				if(strcmp(book[i].pname.fname,key)==0){
					if(no==0){
						printf("\n%-4s %-20s %-20s %-12s %-12s\n","S.No","First Name","Last Name","Landline No","Mobile No");
						found = 1;
						no++;
						printf("%-4d %-20s %-20s %-12s %-12s\n",no,book[i].pname.fname,book[i].pname.lname,book[i].pcontact.landline,book[i].pcontact.mobile);

					}
					i++;
				}
				if(found==0){
					printf("\t\t**** No Record Found ****\n");
				}
			}
			break;
		case 'b':
		case 'B':
			printf("Enter The Last  Name of The Person:\t");
			scanf("%25[^\n]%*c",key);

			 while(i<count){
                                if(strcmp(book[i].pname.lname,key)==0){
                                        if(no==0){
                                                printf("\n%-4s %-20s %-20s %-12s %-12s\n","S.No","First Name","Last Name","Landline No","Mobile No");
                                                found = 1;
                                                no++;
                                                printf("%-4d %-20s %-20s %-12s %-12s\n",no,book[i].pname.fname,book[i].pname.lname,book[i].pcontact.landline,book[i].pcontact.mobile);

                                        }
                                        i++;
                                }
                                if(found==0){
                                        printf("\t\t**** No Record Found ****\n");
                                }
                        }


			break;
		case 'c':
		case 'C':
			 printf("Enter The Mobile number\t");
       			 scanf("%25[^\n]%*c",key);

			 while(i<count){
                                if(strcmp(book[i].pcontact.mobile,key)==0){
                                        if(no==0){
                                                printf("\n%-4s %-20s %-20s %-12s %-12s\n","S.No","First Name","Last Name","Landline No","Mobile No");
                                                found = 1;
                                                no++;
                                                printf("%-4d %-20s %-20s %-12s %-12s\n",no,book[i].pname.fname,book[i].pname.lname,book[i].pcontact.landline,book[i].pcontact.mobile);

                                        }
                                        i++;
                                }
                                if(found==0){
                                        printf("\t\t**** No Record Found ****\n");
                                }
                        }

			break;
		case 'd':
		case 'D':
			 printf("Enter The Landline number\t");
                         scanf("%25[^\n]%*c",key);

                         while(i<count){

                                if(strcmp(book[i].pcontact.landline,key)==0) {

                                        if(no==0) {

                                                printf("\n%-4s %-20s %-20s %-12s %-12s\n","S.No","First Name","Last Name","Landline No","Mobile No");
                                                found = 1;
                                                no++;
                                                printf("%-4d %-20s %-20s %-12s %-12s\n",no,book[i].pname.fname,book[i].pname.lname,book[i].pcontact.landline,book[i].pcontact.mobile);

                                        }
                                        i++;
                                }
                                if(found==0){
                                        printf("\t\t**** No Record Found ****\n");
                                }
                        }

			break;
		default:
			printf("Invalid Option\n");
			return;
	}
}

int  deleterecord (PENT book[],int* count) {

	char *ch;
	
        system("clear");

        printf("\n\t\t***************\n");
        printf("\n\t\t DELTE RECORDS \n");
        printf("\n\t\t***************\n");

        printf("Enter The S.No of The Person to delete:\t");
        scanf("%1[^\n]%*c",ch);

	int sno = atoi(ch);
	int i;
	i = sno-1;

	if(sno<=0||sno>*count) {
		printf("INVAID S NO.\n");
		return 1;

	} else {
		while(i<*count){
			book[i] = book[i+1];
			i++;
		}
		*count =*count -1;
		printf("Delted!!!\n");
		return 0;
	}

}
