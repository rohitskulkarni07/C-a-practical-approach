//std deviation mean and varience
#include<stdio.h>
#include<math.h> //for sqrt()

int main() {

	float elements[20],sum=0.0,mean,var,sd;
	int i,num;

	printf("Enter set of elements (max 20)\n");
	scanf("%d",&num);

	printf("Enter elements\n");
	
	for(i=0;i<num;i++){
		printf("[%d] => ",i);
		scanf("%f",&elements[i]);
		printf("\n");
	}

	for(i=0;i<num;i++){
		sum = sum + elements[i];
	}
	
	mean = sum/num;
	sum =0.0;

	for(i=0;i<num;i++){
		sum = sum + (elements[i] - mean)*(elements[i]-mean);
	}
	var = sum/num;

	sd = sqrt(var);

	printf("mean : %f\n",mean);
	printf("varience : %f\n",var);
	printf("std deviation : %f\n",sd);


	return (0);
}
