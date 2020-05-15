//permutation  of number from 1 to n
//enter n (<10) 

//3

// 1 2 3
// 1 3 2 
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

#include<stdio.h>

void permute(int[],int[],int,int);

int main() {

	int array[10]={0};
	int parray[10],n;

	printf("Enter The Value of n\n");
	scanf("%d",&n);
	printf("Generating the permutations from 1 to n");

	permute(array,parray,1,n);
}

void permute(int array[],int parray[],int L,int N){

	int i;

	if(L>N){
	
		for(i=1;i<=N;i++){
	
			printf("%d",parray[i]);
		}
		printf("\n");
	}
	else{
		
		for(i=1;i<=N;i++){

			if(array[i]==0) {

				parray[L] = i;
				array[i] = 1;
				permute(array,parray,L+1,N);
				array[i] = 0;
			}
		}
	}

}
