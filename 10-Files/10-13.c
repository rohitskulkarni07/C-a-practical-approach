//fscanf and fprintf
//
#include<stdio.h>
#include<stdlib.h>

void selcection_sort(int[],int );

int main() {
	
	FILE *fp;
	char str[50],*p;
	int i,noe,num[50];

	fp = fopen("Marks.txt","r");
	if(fp == NULL){
		printf("Unable To Open File Marks.txt\n");
		exit(1);
	}
	fscanf(fp,"%d",&noe);
	
	for(i=0;i<noe;i++){
		fscanf(fp,"%d",&num[i]);
	}

	fclose(fp);

	selcection_sort(num,noe);

	fp = fopen("Marks.txt","a");
	
	if(fp == NULL){
                printf("Unable To Open File Marks.txt\n");
                exit(1);
        }
	fprintf(fp,"LIST OF MARKS ARE SORTED\n");

        for(i=0;i<noe;i++){
                fprintf(fp,"%d ",num[i]);
        }

	fclose(fp);
	return 0;
}

void selcection_sort(int num[],int noe ){

	
	int i,j,min,temp;

	for(i=0;i<noe;i++){
		
		min = i;

		for(j=i+1;j<noe;j++){
			if(num[j]<num[min]){
				min = j;

			}
		}
		temp=num[min];
		num[min] = num[i];
		num[i] = temp;
	}
}

