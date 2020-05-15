/*
2.Write a program which accepts a string from user which contains a characters from b to y.   

	Input : mn jn kn kazfd  Output : mn jn kn k   
*/

#include<stdio.h>

void main(){
/*
	int i=0;
	char ch;
	char arr[100];
	int space=32;

	printf("Enter the String\n");

	while( (ch=getchar())!='\n' ){
	
		if(ch>='b' && ch<='y'){

			arr[i++]=ch;
		}
		else{
			arr[i++]=space ;
		}
	}
	arr[i]='\0';

	printf("%s",arr);
*/
/*
	int i;
	int space=32;
	int ch=0;
	char arr[100];

	printf("Enter sentances \n");
	scanf("%[^\n]",arr);
	
	for(i=0;arr[i]<='\0';i++){

		if(arr[i]>='b' && arr[i]<='y'){
			arr[ch++]=arr[i];
		}
		else{
			arr[ch++]=space ;
		}
		
	}
	printf("%s",arr);
*/
	char arr[100];
//	int cnt=0;
	printf("Enter sentances \n");
	scanf("%[^\0]",arr);
	int space=32;
	int i;
	for(i=0;arr[i]!='\n';i++){
	//	cnt++;
		if(arr[i]=='a'|| arr[i]=='z'){

			arr[i]=space;

		}
	}
	//printf("cnt:%d",cnt);
	printf("%s",arr);
}

