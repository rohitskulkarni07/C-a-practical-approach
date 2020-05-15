//Addition of two matrices

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

	printf("Enter Elemets in Matrix B\n");
	
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
        
			printf(" Matrix B[%d][%d]: ",i+1,j+1);
                        scanf("%d",&matrixB[i][j]);
                }
	
		printf("\n");
        
	}
//_________________________________________________________________________________________________________________________________
//
//		Addition of Two Matrices and Display Resultunt Matrix
//_________________________________________________________________________________________________________________________________

	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
			matrixR[i][j] = matrixA[i][j] + matrixB[i][j];
			printf("%-2d ",matrixR[i][j]);
		}
		printf("\n");		
	}

	return (0);
}
