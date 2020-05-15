#include<stdio.h>
#include<stdbool.h>
bool prime(int);

int main() {
	
	int num;

	printf("Enter Number\n");
	scanf("%d",&num);

	if(prime(num)){
		printf("NUMBER %d IS PRIME",num);
	}else{
		printf("NUMBER %d IS NOT PRIME",num);
	}

	return (0);
}

bool prime(int num){

	int i=0,count=0;

	for(i=2;i<num;i++){
		if(num%i == 0){
			return 0;
		}
		return 1;
		
	}
}
