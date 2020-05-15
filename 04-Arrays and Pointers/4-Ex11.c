//Transpose matrix

#include<stdio.h>

int main() {
	
	int matrixA[10][10];
	int matrixB[10][10];
	int matrixR[10][10] = {0};

	int row1,column1;
	int row2,column2;

	int i,j,k;
//________________________________________________________________________________________________________________________________
//						
//	Insert Elements in Matrix
//________________________________________________________________________________________________________________________________


	printf("Enter Order Of Matrix 1(max 10\n");
	scanf("%d %d",&row1,&column1);

	printf("Enter Elemets in Matrix A\n");
	for(i=0;i<row1;i++){
		for(j=0;j<column1;j++){

			printf(" Matrix A[%d][%d]: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}

		printf("\n");
	}
	
	for(i=0;i<row1;i++) {
        	for(j=0;j<column1;j++) {
                        printf("%-2d ",matrixA[i][j]);
                }
                printf("\n");
        }
//________________________________________________________________________________________________________________________________
//
//	Transpose of Two Matrices and Display Resultunt Matrix
//_________________________________________________________________________________________________________________________________

	printf("Transpose of above matrix is : \n");
	
	for(i=0;i<column1;i++){
	
		for(j=0;j<row1;j++){
			
			matrixR[i][j] =  matrixA[j][i];

		}	
	}
	
//__________________________________________________________________________________________________________________________________
//
//	Display Resultunt Matrix
//______________________________________________________________________________________________________________________________________

	for(i=0;i<column1;i++) {
		for(j=0;j<row1;j++) { 
	
			printf("%-2d ",matrixR[i][j]);
		}
		printf("\n");
	}
	return (0);
}
