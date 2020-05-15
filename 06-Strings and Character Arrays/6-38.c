//use fo charachter pointer ch*


#include<stdio.h>

int main(){

	int i,a[5];
	
	char* states[] = {"Maharashtra","Punjab","Bihar","Rajasthan","Gujrat"};
	char* capitals[] = {"Gndhinagar","Chandhighar","Jaipur","Patna","Mumbai"};

	printf("States\t\t\tCapitals\n");
	printf("____________________________________________________\n");
	
	for(i=0;i<5;i++){
		printf("%d. %-10s\t\t%d.%s\n",i+1,states[i],i+1,capitals[i]);
	}


	printf("____________________________________________________\n");
	
	printf("Match the Columns states/capitals \n");
	printf("Enter Ony Serail NUmber\n");

	printf("____________________________________________________\n");
		
	for(i=0;i<5;i++){
		printf("Capital of state %d is at\t",i+1);
		scanf("%d",&a[i]);
			
	}
	printf("____________________________________________________\n");

	for(i=0;i<5;i++){
		printf("%-11s is Capital of %s\n",capitals[a[i]-1],states[i]);
	}
	
	return (0);
}
