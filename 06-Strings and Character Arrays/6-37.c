//reading list of string from terminal

#include<stdio.h>

int main(){
	
	int i=0,j=0,marks[10];
	char stud[10][20],ch;

	printf("Enter THe name and marks of student\n");

	while(1){
	
		scanf("%s %d",stud[i],&marks[i]);
		i++;
		fflush(stdin); 					// for emptying buffer for taking new input thorugh scanf();
		fflush(stdout); 					// for emptying buffer for taking new input thorugh scanf();
		puts("Do You Want To Continue ? {Y/N}");
		scanf(" %c",&ch);
		
//		fflush(stdin); 					// for emptying buffer for taking new input thorugh scanf();
//		fflush(stdout); 					// for emptying buffer for taking new input thorugh scanf();
//		
//		fgets(&ch,1,stdin);
//		fgets(&ch,1,stdin);
		if(ch=='Y'||ch=='y'){
		
			continue;

		}
		else{
			break;
		}
		if(i==10){
			printf("cannot hold more \n");
			break;
		}
	}

	int max=0;
	
	for(j=0;j<i;j++){
		if(marks[j]>marks[max]) {
			max = j;
		}
	
	}
	
	printf("\n***%s got the heighest marks %d",stud[max],marks[max]);
	return (0);
}

