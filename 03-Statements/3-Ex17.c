/*
      1
    2 3 2
  3 4 5 3 4
4 5 6 7 6 5 4

*/

#include<stdio.h>

int main() {
	
	int n,r=1,val,j;

	printf("Enter The NUmber of row in the Pyramid\n");
	scanf("%d",&n);

	while(r<=n){
	
		val = r;
		//space
		for(int i=1;i<=n-r;i++){
			printf("  ");

		}

		//pyramid
		for(j=1;j<=2*r-1;j++){
			
			if(j<=(2*r-1)/2){

				printf(" %d",val++);

			} else if(j<=(2*r-1)/2+1){
			
				printf(" %d",val);

			} else {
			
				printf(" %d",--val);

			}
		}
		printf("\n");
		r++;
	}
	
	return 0;
}
