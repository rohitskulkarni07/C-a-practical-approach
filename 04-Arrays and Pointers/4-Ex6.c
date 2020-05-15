//Bubble sort

#include<stdio.h>

int main() {

	int arr[20],num,i,temp,min,j;

	printf("Enter no.of elements you want insert\n");
	scanf("%d",&num);
	
	printf("Enter %d elements\n",num);

	for(i = 0; i<num ; i++) {
		printf("[%d]\t",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\n____SORTING ARRAY NOW____\n");

	//____________________BUBBLE SORT________________________________________________________________________
	for(i=0;i<num-1;i++){	//Entire list is unsorted initially
		for(j=0;j<num-1-i;j++) {
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}				
	}
	//____________________________________________________________________________________________
	printf("____ARRAY SORTING DONE____\n____PRINTING SORTED ARRAY____\n");

	for(i=0;i<num;i++) {
		printf("[%d]\t",arr[i]);
	}

	return 0;
}
