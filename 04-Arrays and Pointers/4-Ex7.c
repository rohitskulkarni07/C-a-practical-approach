//Merge to sorted array

#include<stdio.h>

int main() {

	int arr[20],brr[20],crr[40],n,m,i,j,l,h;

	printf("Enter no.of elements you want insert array1\n");
	scanf("%d",&m);
	
	printf("Enter %d elements in array1\n",m);

	for(i = 0; i<m ; i++) {
		printf("[%d]\t",i+1);
		scanf("%d",&arr[i]);
	}
	
       	printf("Enter no.of elements you want insert array2\n");
        scanf("%d",&n);

        printf("Enter %d elements in array2\n",n);

        for(i = 0; i<n ; i++) {
                printf("[%d]\t",i+1);
                scanf("%d",&brr[i]);
        }

	printf("\n____MERGING ARRAY NOW____\n");

	//____________________MERGING TWO SORTED ARRAY_________________________________________________	
	i = 0;//array1 index 
	j = 0;//array2 index

	h = 0;//result array index

	while(i<m && j<n) {

		if(arr[i]<brr[j]){
			crr[h++]=arr[i++];
	
		} else {
			crr[h++]=brr[j++];
	
		}

	}
	printf("done\n");
	while(i<m) {	//if array1 has remaining elements
		crr[h++] = arr[i++];
	}

	printf("done\n");
	while(j<n){	//if array2 has remaining elements
		crr[h++] = brr[j++];
	}

	printf("done\n");
	//____________________________________________________________________________________________
	printf("____ARRAY MERGING DONE____\n____PRINTING ARRAY____\n");

	for(i=0;i<m+n;i++) {
		printf("[%d]\t",crr[i]);
	}

	return 0;
}
