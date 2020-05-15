#include<stdio.h>
#include<stdlib.h>

struct name {
	char fname[20];
	char lname[20];
};
struct phonebook_entry{
	struct name pname;
	char mno[15];
};

int main() {
	
	FILE *fp;
	char ch;
	
	struct 	phonebook_entry p;

	fp = fopen("phonebook.txt","wb+");

	if(fp ==  NULL){
		printf("Unable to open FIle \n");
		exit(1);


	}
	while(1) {

		printf("Enter The First Name\n");
		gets(p.pname.fname);

		printf("Enter The Last  Name\n");
		gets(p.pname.lname);

		printf("Enter The Mobile Number\n");
		gets(p.mno);

		fwrite(&p,sizeof(p),1,fp);
		
		printf("Do You Want to Enter More Records\n");
		scanf("%c%*c",&ch);
		
				
		if(ch=='Y' || ch == 'y'){
			continue;

		}else{
			break;
		}
		
	}
	//rewind(fp);
	fseek(fp,0L,SEEK_SET);
	
	printf("\n\nPhonebook Entries present in file: \n\n");
	printf("%-20s %-20s %-15s\n","First Name","Last Name","Mobile Number");
	printf("--------------------------------------------------------------\n");

	while(!feof(fp)) {
		fread(&p,sizeof(p),1,fp);
		if(feof(fp)){
			break;

		}else {
		
			printf("%-20s %-20s %-15s\n",p.pname.fname,p.pname.lname,p.mno);
		}
	}

	fclose(fp);

	return (0);
}
