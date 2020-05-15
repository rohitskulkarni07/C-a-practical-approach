#include<stdio.h>

int main() {

	int arr[20],num,i,key,j;

	printf("Enter no.of elements you want insert\n");
	scanf("%d",&num);
	
	
	printf("Enter %d elements\n",num);
	for(i = 0; i<num ; i++) {
		printf("[%d]\t",i+1);
		scanf("%d",&arr[i]);

	}

	printf("\n____SORTING ARRAY NOW____\n");
	
	for(i=1;i<num;i++) {
		key = arr[i]; 	// key element
		j=i-1;		//current position

		while(j>=0 && arr[j]>key) {
			arr[j+1] = arr[j];	//move current elemet to ahead of the current position
			j = j-1;

		}

		arr[j+1] = key;
	
	}

	printf("____ARRAY SORTING DONE____\n____PRINTING SORTED ARRAY____\n");

	for(i=0;i<num;i++) {
		printf("[%d]\t",arr[i]);
	}

	return 0;
}
