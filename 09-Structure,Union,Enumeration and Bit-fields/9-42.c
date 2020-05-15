#include<stdio.h>

enum COMBINATION {series=1,parallels=2};

enum SWITCH {OFF,ON};

int main() {

	enum COMBINATION ckt;
	enum SWITCH s1,s2;

	printf("Enter The Configuration for ckt:\n");
	printf("Press '1' for Series and '2' for Parallels\n");
	scanf("%d",&ckt);
	
	printf("Enter The Status Of Switches:(s1,s2)\n");
	printf("Press '0' for OFF and '1' for ON\n");
	scanf("%d %d",&s1,&s2);

	if(ckt == series){
		if(s1==ON && s2 == ON){

			printf("The Bulb Will Glow!!! 💡️\n");
		}else{
		
			printf("The Bulb Will Not Glow!!! ⛔️\n");
		}

	}else{
		if(s1==ON || s2==ON){

			printf("The Bulb Will Glow!!! 💡️\n");
		}else{

			printf("The Bulb Will Not Glow!!! ⛔️\n");
		}
	}


	return 0;
}
