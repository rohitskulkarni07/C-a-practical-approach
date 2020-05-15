//Merge Sort


#include<stdio.h>

void merge_sort(int[],int,int);
void merge(int[],int,int,int);
void print(int[],int);

int count = 1;

int main() {
	
	int size=0;
	printf("Input Array Size\n");
	scanf("%d",&size);

	int Array[size];
	printf("Input Array Elements\n");

	for(int i=0;i<size;i++){
		scanf("%d",&Array[i]);
	}

	merge_sort(Array,0,size-1); 		//@param : 1.Array to be sorted,2. Lowest Index of array 3. Highest element for array

	print(Array,size);
}


void merge_sort(int arr[],int l,int r) { 

	printf("Count %d L = %d R = %d\n",count++, l, r);

	if(l < r) {
		
		int m = l+(r-l)/2;
		printf("M = %d\n",m);

		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);

		merge(arr,l,m,r);
	       	
	
	} else {
		printf("FALSE AT ABOVE ITERATION \n");
	}
}

void merge(int arr[],int l,int m,int r){
	int i,j,k;
	
	int n1 = m - l + 1;
	int n2 =  r - m;
	
	printf(" count : %d n1 = %d n2 = %d\n",count-1,n1,n2);

	int L[n1],R[n2]; //temprory arrays

	for(i=0;i<n1;i++){
		L[i] = arr[l+i];
	}

	//___________________________print temp array
	for(i=0;i<n1;i++){
		printf("%d ",L[i]); 
	}
	printf("\n");

	for(j=0;j<n2;j++){
		R[j] = arr[m+1+j];
	}
	//___________________________print temp array
	for(j=0;j<n2;j++){
                printf("|%d ",R[j]); 
        }
	printf("\n");

	
	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2) {
		if(L[i]<=R[j]){	
			arr[k] = L[i];
		 	i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k] = L[i];
		printf("remining in L{i} = %d\n",L[i]);
		i++;
		k++;

	}
	while(j<n2){
		arr[k] = R[j];
		printf("remining in R{j} = %d\n",R[j]);
		j++;
		k++;
	}	

}

void print(int arr[],int size){

	for(int i = 0;i<size;i++){
		printf("|%d",arr[i]);
	}
}

