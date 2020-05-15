#include <stdio.h>	//#include "stdio.h"	if Header is in  current directory.
	
	void main(){	// void is return type : means main() function returning nothing...
			//if return type is not given to main() the Warning will be given at compile time but still we can get correct output...
		int z = 10;	//variable 'a'(L-value) of type 'int' containing/holding a value '10'(R-value)
				//Non-Executable Statement
	
		if(z==10){	//Flow-control statement verifies the condition if evaluated as true then only following associated block will be executed...
	
			printf("Hello\n");//prints 'Hello'...'\n' move cursor to new line..
	
			printf("\tWelome\n");//prints Welcome on new line and '\t' gives considerable amount of space between two words...
		}
		else{	// if "if's" Condition is evaluated as false the 'else' block is executed with which its associated...

			printf("Else is Exicuted\n");
		}
/*OUTPUT
rohit@rohit-XPS-15-9560:~/C/06 MAY 2018 if else$ gcc ifelse.c 
rohit@rohit-XPS-15-9560:~/C/06 MAY 2018 if else$ ./a.out 
Hello
	Welome
*/		int a=5;
	
		printf("Example Program 1\n");
	
		if(a=10){	//assingns 10 to a(condition:true because every non zero value considered as true(1)) block associated with 'if' will be exicuted
			printf("Hello\n"); //prints Hello and cusrsor will move to next line
		}
		else{		//'else block will not be exicuted as 'if' condition is not false'
			printf("Bye\n");
		}
	

/*
Example Program 1
OUTPUT
Hello
*/		printf("Example Program 2\n");

		if(a=0){	//as we assigning  0(zero) to a then it is considers condition as False(0) and move forward to exicute block associated with 'else'
			printf("Hello\n");
		}
		else{		//else block will be exicuted
			printf("Bye\n");
		}
		
/*
Example Program 2
OUTPUT
Bye
*/
		printf("Example Program 3\n");
		
		if(a=10);{ //assigns a=10;(semmicolon after if statement considered as NULL statement) and hence next curly brace is taken as block and gets exicuted.

			printf("Good One\n");//prints 'Good One'
		}
		
			printf("Keep It Up\n");//prints 'Keep It Up'
/*
OUTPUT
Example Program 3
Good One
Keep It Up
*/
		printf("Example Program 4\n");
		if(a=0);{//though Condition is false but due to semilcolon(;) its consider as NULL statement...
			printf("Bravo! Bravo!!\n");
		}//end of if block...
		{//block
			printf("Eureka! Eureka!!\n");
		}
		
/*
OUTPUT
Example Program 4
Bravo! Bravo!!
Eureka! Eureka!!


*/
		
		printf("Example Program 5\n");
			
		if(a=0)//if's condition is false
			printf("Bhariii !!!\n");//this is the 1st stmt after 'if' and hence its Binded with upper if stmt...this stmt will not be Exicuted as 
						// if's condition is evaluated as false
			printf("Good !\n");	// this is the 2nd stmt after if and it will be executed due to if's condition is false because its considered as
						// outside of if stmt area...
/*OUTPUT
Example Program 5
Good !

*/
		printf("Example Program 6\n");
		
		 if(a=10)//if's condition is True
                        printf("Bhariii !!!\n");//this is the 1st stmt after 'if' and hence its Binded with upper if stmt...this stmt will be Exicuted as 
                                                // if's condition is evaluated as True...
                        printf("Good !\n");// This stmt not binded with if and hence its definately exicuted...	
	
/*
Example Program 6
Bhariii !!!
Good !
*/



		printf("Example Program 7\n");
			if(10==10){ //we know that 10 is equals 10 hence condition is true block of 'if'will be exicuted
				printf("Bhari rao...!\n");
			}
			else{
				printf("Hello\n");
			}

/*
OUTPUT
Example Program 7
Bhari rao...!
*/	
		printf("Example Program 8\nError:lvalue required as left operand of assignment \n");/*
			 if(10=10){ // this line will give error because 10 cannot be  assign to numeric 10 as its not location value...
                                printf("Bhari rao...!\n");
                        }
                        else{
                                printf("Hello\n");
                        }
*/
/* 
OUTPUT
Example Program 8
Error:lvalue required as left operand of assignment 

*/ 
        	
		

		printf("Example Program 9\nOUTPUT:NO Output\n");
			int c=50,b;
			if(c==10)	//1.if...(Condition is false c is not equals to 10)
				if(b=5)	//2.if this if is binded with 1.if and will be executed if 1.if is true...
					printf("Nested if\n");
				else 	//this else is binded with 2.if
					printf("Inside else\n");
		
/*
OUTPUT
Example Program 9
OUTPUT:NO Output
*/	
		printf("Example Program 10\n");
			int d=5,e;	
			if(d==5)//1.if
				if(e=50)//2.if binded with 1.if
					printf("Nested if\n");//stmt inside 2.if
				else
					printf("Inside else\n");//stmt inside else of 2.if
				

/*
OUTPUT
Example Program 10
Nested if
*/			

		printf("Example Program 11\n");

		int f=10,g;
		if(f==0)//1.if condition false going for else 
			if(g=5)// 2.if not be executed as 1.if is false 
				printf("Nested If");
			else	//else of 2.if 
				printf("Inside else");
			else	//this single else is get binded with upper else i.e 1.if
				printf("You Are Correct\n");//this will be the Output...
/*
OUTPUT
Example Program 11
You Are Correct
*/
		printf("Example Program 12\nError:expected ‘}’ before ‘else’ else \n");
		/*
		if(a=10){//in this we created a body of if hence that 2nd else stmt inside body will not be combined or binded with first if stmt and causes a error
			if(b=10)
				printf("Whoo!!!");
			else
				printf("Yeahhh!!!");
			else 
				printf("Error wala else");
			
		}
		else{// this is the perfect else stmt which will binded with 1st if stmt
			printf("No Problem");
		}*/
		
			printf("Example Program 13\n");
			int j=5,k;
				
			if(j>10){//condition is false going to else 
				if(j<20)
					printf("Small");
				else
					printf("between range");
			}
			else{
				if(k>0)// k contains garbage value and it can be any numeric value 0 or anything..
					printf("k is garbage value and equals to 0\n");// if k is zero then this stmt will be executed
				else
					printf("k is garbege value and not equal to zero\n ");//if k is any other value the this stmt will be executed...
			}
/*
OUTPUT
Example Program 13
k is garbege value and not equal to zero

*/		
			
	}
/**********FINAL OUTPUT*******/
/*
 rohit@rohit-XPS-15-9560:~/C/06 MAY 2018 if else$ vim ifelse.c
rohit@rohit-XPS-15-9560:~/C/06 MAY 2018 if else$ gcc ifelse.c 
rohit@rohit-XPS-15-9560:~/C/06 MAY 2018 if else$ ./a.out 
Hello
	Welome
Example Program 1
Hello
Example Program 2
Bye
Example Program 3
Good One
Keep It Up
Example Program 4
Bravo! Bravo!!
Eureka! Eureka!!
Example Program 5
Good !
Example Program 6
Bhariii !!!
Good !
Example Program 7
Bhari rao...!
Example Program 8
Error:lvalue required as left operand of assignment 
Example Program 9
OUTPUT:NO Output
Example Program 10
Nested if
Example Program 11
You Are Correct
Example Program 12
Error:expected ‘}’ before ‘else’ else 
Example Program 13
k is garbege value and not equal to zero
*/
