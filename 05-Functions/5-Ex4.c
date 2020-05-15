//Qucick sort 
//
#include<stdio.h>

void swap(int *a,int* b){

	int t = *a;
	*a = *b;
	*b = t;
}
void print(int arr[],int size){

	for(int i=0;i<size;i++) { 
		printf("|%d",arr[i]);
        }        
}

void quickSort(int[],int,int);
int partition(int[],int,int);

int main() {

        int size = 0,x;

        printf("Enter Array Size\n");
        scanf("%d",&size);

        printf("Enter Array elements\n");
        int arr[size];
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }
	quickSort(arr,0,size-1);

	print(arr,size);
	
	return (0);
}

void quickSort(int arr[],int low,int high) {
	
	if(low<high){

		int pi = partition(arr,low,high);

		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

int partition(int arr[],int low,int high){
	
	int pivot = arr[high];
	int i = (low-1);

	for(int j=low;j<=high-1;j++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}

	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
