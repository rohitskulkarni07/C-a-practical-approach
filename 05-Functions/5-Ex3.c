//BInary Search

#include<stdio.h>

int BinarySearch(int[],int,int,int);

int main() {

	int size = 0,x;
	
	printf("Enter Array Size\n");
	scanf("%d",&size);

	printf("Enter Array elements\n");
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter Element to be searched ?\n");
	scanf("%d",&x);
	
	int result=BinarySearch(arr,0,size-1,x);

	(result == -1)?printf("Element Not Found\n"):printf("Element Found at Index %d",result);

	return (0);

}

int BinarySearch(int arr[],int l, int r, int x){
	
	if(r>=l){
		int mid = l + (r-l)/2;

		if(arr[mid]==x){
			return mid;
		}
		
		if(arr[mid]>x){
			return BinarySearch(arr,l,mid-1,x);
		}

		return BinarySearch(arr,mid+1,r,x);

	
	}
	return (-1);
}
