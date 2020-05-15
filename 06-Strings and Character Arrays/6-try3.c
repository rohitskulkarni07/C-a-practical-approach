/*
3.Write a program which accept sentence from user and print number of small letters, capital letters and digits from that sentence.

        Input : abcDE 5Glm1 O   Output : Small:5 Capital: 4 Digits: 2

*/
#include<stdio.h>

void main(){
	int cnt=0;
	int i;
	int special=0,small=0,capital=0,digit=0;
	char arr[10];

	printf("Enter The Sentence\n");
	scanf("%[^\n]",arr);


	for(i=0;arr[i]!='\0';++i){
			cnt++;
		if(arr[i]>='a' && arr[i]<='z'){
			++small;		
	
		}
		else if(arr[i]>='A' && arr[i]<='Z'){

			++capital;

		}
		else if(arr[i]>='0' && arr[i]<='9'){

			++digit;

		}
		else{
			++special;
		}
	
	}
	printf("small:%d \n capital:%d \ndigits:%d \nspecial:%d \n",small,capital,digit,special);
	printf("cnt %d",cnt);
}
