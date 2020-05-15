//Selection sort

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

	//___________SELECTION SORT_________________________________________________________________________________
	for(i=0;i<num-1;i++){	//Entire list is unsorted initially
		
		min = i;
		for(j=i+1;j<num;j++) {		//select the minimum element in the list
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		//swap the minimum element with the first positioned element in usorted list
		
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
		
	}
	//____________________________________________________________________________________________
	printf("____ARRAY SORTING DONE____\n____PRINTING SORTED ARRAY____\n");

	for(i=0;i<num;i++) {
		printf("[%d]\t",arr[i]);
	}

	return 0;
}
