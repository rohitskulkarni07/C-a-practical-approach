#include<stdio.h>

int main() {
      	
	int elements[20],num,i,key,found;


        printf("Enter set of elements (max 20)\n");
        scanf("%d",&num);

        printf("Enter elements\n");

        for(i=0;i<num;i++){
        
		printf("[%d] => ",i);
                scanf("%d",&elements[i]);
                printf("\n");
        }

	printf("Enter element to be search...\n");
	scanf("%d",&key);

	for(i=0;i<num;i++) {
		if(elements[i]==key){
			printf("key %d found at %d position\n",key,i+1);
			found =1;
			break;
		}
	
	}
	(found == 0)?printf("key not found\n"):printf("\n ");

	return (0);
}
