//matrix multiplication

#include<stdio.h>

int matmulti(int[][10],int,int,int[][10],int,int,int[][10]);

int main(){
	
	int i=0,j=0,row1=0,col1=0,row2=0,col2=0;

	printf("Enter MAtrix 1 row and col for 1st matrix\n");
	scanf("%d %d",&row1,&col1);

	printf("Enter matrix 2 row and colmns\n");
	scanf("%d %d",&row2,&col2);

	int arr1[10][10];
	int arr2[10][10];
	int result[10][10] = {0};

	printf("E<Nter elements of 1st matrix\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}

	printf("ENter elements of 1st matrix\n");
	for(i=0;i<row2;i++){
        	for(j=0;j<col2;j++){
                        scanf("%d",&arr2[i][j]);
                }
		printf("\n");
        }
	
	int check=matmulti(arr1,row1,col1,arr2,row2,col2,result);
	if(check!=-1){
		for(i=0;i<row1;i++){
			for(j=0;j<col2;j++){
				printf("%-2d ",result[i][j]);
			}	
			printf("\n");
		}	
	}else{
		printf("matrix not compatible\n");
	}
}

int matmulti(int arr1[][10],int row1,int col1,int arr2[][10],int row2,int col2,int result[][10]) {
	
	if(col1!=row2){
		return -1;
	}
	int i,j,k;

	for(i=0;i<row1;i++){
			for(j=0;j<col2;j++){
				for(k=0;k<col1;k++){
					result[i][j] += arr1[i][k] * arr2[k][j];
				}

			}	

		}
	return(1);

}
