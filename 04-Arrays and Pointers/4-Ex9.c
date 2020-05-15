//Mutiplicaion of two matrices

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



	printf("Enter Order Of Matrix 2(max 10\n");
	scanf("%d %d",&row2,&column2);

	printf("Enter Elemets in Matrix A\n");
	for(i=0;i<row1;i++){
		for(j=0;j<column1;j++){

			printf(" Matrix A[%d][%d]: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}

		printf("\n");
	}

	printf("Enter Elemets in Matrix B\n");
	
	for(i=0;i<row2;i++){
		for(j=0;j<column2;j++){
        
			printf(" Matrix B[%d][%d]: ",i+1,j+1);
                        scanf("%d",&matrixB[i][j]);
                }
	
		printf("\n");
        
	}
//_________________________________________________________________________________________________________________________________
//
//	Multiplication of Two Matrices and Display Resultunt Matrix
//_________________________________________________________________________________________________________________________________

	if(column1==row2){
		printf("Result Of Multiplication is \n");
		for(i=0;i<row1;i++){
			for(j=0;j<column2;j++){
				for(k=0;k<column1;k++){
					matrixR[i][j] += matrixA[i][k] * matrixB[k][j];
				}

			}	

		}

	}
	else {
		printf("column of 1st matrix and row of second matrix does not matched...cannot perform Multiplication...\n");
	}	
//__________________________________________________________________________________________________________________________________
//
//	Display Resultunt Matrix
//______________________________________________________________________________________________________________________________________

	for(i=0;i<row1;i++){
		for(j=0;j<column2;j++){
			printf("%-2d ",matrixR[i][j]);
		}
		printf("\n");
	}
	return (0);
}
