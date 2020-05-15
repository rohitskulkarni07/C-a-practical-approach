//Symetric matrix or not?


#include<stdio.h>
#include<stdlib.h>

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

	
	//if row and column are anot same means its not symetric matrix
	
	if(row1!=column1) {
		printf("Row And Column does not matched not a symetric matrix...\n\n***exiting now***");
		exit(0);
	}
	
	for(i=0;i<column1;i++){
	
		for(j=0;j<row1;j++){
			
			matrixR[i][j] =  matrixA[j][i];

		}	
	}
	
	//check symmetry
	for(i=0;i<row1;i++) {
	
		for(j=0;j<column1;j++) {
			
			if(matrixA[i][j]!=matrixR[i][j]){
			
				printf("not a symetric matrix...\n\n***exiting now***");
			}

		}
	}	

	printf("Matrix is Symetric matrix\n");
	printf("Transpose of above matrix is : \n");
	
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
