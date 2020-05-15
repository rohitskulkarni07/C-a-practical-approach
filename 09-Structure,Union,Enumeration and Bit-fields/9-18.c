#include<stdio.h>

struct name{
	char fname[20];
	char lname[20];
};

struct pbook{
	struct name fullname;
	char mobnum[11];
};

int main(){
	struct pbook p1,p2;
	 
	printf("Enter first name of person\n");
	scanf("%19[^\n]%*c",p1.fullname.fname);

	printf("Enter last name of person\n");
	scanf("%19[^\n]%*c",p1.fullname.lname);

	printf("Enter Mobile Number\n");
	scanf("%11[^\n]%*c",p1.mobnum);

	printf("Enter first name of person\n");
	scanf("%19[^\n]%*c",p2.fullname.fname);
      
        printf("Enter last name of person\n");
 	scanf("%19[^\n]%*c",p2.fullname.lname);

        printf("Enter Mobile Number\n");
	scanf("%19[^\n]%*c",p2.mobnum);
        

	printf("______________________________________\n");
	printf("Name: %s %s\n",p1.fullname.fname,p1.fullname.lname);
	printf("Mobile Number :%s \n",p1.mobnum);
	printf("______________________________________\n");
	printf("Name: %s %s\n",p2.fullname.fname,p2.fullname.lname);	
	printf("Mobile Number :%s \n",p2.mobnum);
	printf("______________________________________\n");

}


