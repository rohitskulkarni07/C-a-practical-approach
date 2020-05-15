//insertion sort

#include<stdio.h>

int main() {
      int elements[20],num,i,j,current;

        printf("Enter set of elements (max 20)\n");
        scanf("%d",&num);

        printf("Enter elements\n");

        for(i=0;i<num;i++){
                printf("[%d] => ",i);
                scanf("%d",&elements[i]);
                printf("\n");
        }

	for(i=1;i<num;i++) {
		
		printf("_______________________interation :%d or i = %d _____________________________________________\n\n",i,i);

		if(elements[i]<elements[i-1]) { // next element is smaller than previous element
		
			printf("\telements[i] < elements[i-1]\n");
			printf("\telements[%d]< elements[%d]\n",i,i-1);
			printf("\t   %d       <     %d \n",elements[i],elements[i-1]);
		
			current = elements[i];	//copy next into current
			
			printf("\tcurrent = elements[i]\n");
			printf("\tcurrent = elements[%d]\n",i);
			printf("\t  %d    =    %d\n",current,elements[i]);

			for(j=i-1;j>=0;j--) {	
			
				printf("\t\tfor(j=i-1;j>=0;j--)\n\n");	
			
				elements[j+1] = elements[j];	//prev element is greater than next hence swap their position
				
				printf("\t\telements[j+1] = elements[j]\n");
				printf("\t\telements[%d] = elements[%d]\n",j+1,j);
				printf("\t\t	%d        =     %d\n",elements[j+1],elements[j]);
				
				if(j==0 || elements[j-1]<=current) { //if no elements are there at this instance then break the loop
					printf("\t\t\tj = 0  elements[j-1] <= current \n");
					printf("\t\t\tj = %d    %d         <=    %d \n_BREAK_\n",j,elements[j-1],current);
					break;
				}

			}

			elements[j] =  current;
			printf("elements[j] = current\n\n");
			printf(" %d         =    %d  \n\n ",elements[j],current);

		}
	}	

	for(i=0;i<num;i++){
		printf("[%d] => %d\n",i,elements[i]);
	}
	return (0);
}
