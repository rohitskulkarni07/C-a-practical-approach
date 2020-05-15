
//perfect number up to n

#include<stdio.h>

int main() {

	int num=1,i=0,sum=0,count=1,range;
	
	printf("Enter number end range find perfect or not\n");
	scanf("%d",&range);

	while(count<=range){
		
		for(i=1;i<num;i++){
	
			if(num%i==0) {	

				sum = sum + i;
			}
		
		
		}
		count++;
		sum == num ? printf("%d is Perfect\n",num):printf("");
		num++;
		sum =0;
	}



	return 0;
}
