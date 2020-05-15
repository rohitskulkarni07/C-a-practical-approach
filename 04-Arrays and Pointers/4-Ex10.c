//addition of pricipe diagonal element and opposite diagonal element of two matrices

#include<stdio.h>

int main() {
	
	int matrixA[10][10];
	int matrixB[10][10];
	int matrixR[10][10];
	int order,i,j;
//________________________________________________________________________________________________________________________________
//						
//	Insert Elements in Matrix
//________________________________________________________________________________________________________________________________


	printf("Enter Order Of Matrix(max 10\n");
	scanf("%d",&order);

	printf("Enter Elemets in Matrix A\n");
	
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){

			printf(" Matrix A[%d][%d]: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}

		printf("\n");
	}
//_________________________________________________________________________________________________________________________________
//
//		Addition of both the diagonal and display  Resultunt Matrix
//_________________________________________________________________________________________________________________________________
	
	int temp;
	int sumofpde = 0,sumofode = 0;
	

	temp = order-1;
	for(i=0;i<order;i++){
		
		sumofpde = sumofpde + matrixA[i][i];		//pde = prinicple diagonal element
		sumofode = sumofode + matrixA[i][temp--];	//ode = opposite diagonal element
				
	}

	printf("sum of principle diagonl element is :  %d\n",sumofpde);
	printf("sum of opposite diagonl element is :  %d\n",sumofode);
	return (0);
}
