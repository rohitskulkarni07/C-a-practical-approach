//min and max
//
#include<stdio.h>

int main() {
	int elements[20],num,i,min,max;

	printf("Enter set of elements (max 20)\n");
	scanf("%d",&num);

	printf("Enter elements\n");
	
	for(i=0;i<num;i++){
		printf("[%d] => ",i);
		scanf("%d",&elements[i]);
		printf("\n");
	}

	//let max = min = elements[0]
	min = max = elements[0];

	for(i=1;i<num;i++){
		if(elements[i]>max){
			max = elements[i];
		}else if(elements[i]<min) {
			min = elements[i];
		}
	}

	printf("Max: %d\n",max);
	printf("Min: %d\n",min);
	return (0);
}
