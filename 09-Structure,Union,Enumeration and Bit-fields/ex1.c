//________________________________________________________________________________
//
//			Headers
//_________________________________________________________________________________

#include<stdio.h>
#include<math.h>
#include<string.h>

//________________________________________________________________________________
//
//			Struct
//________________________________________________________________________________

typedef struct Complex {

	int re;
	int im;
}COMP;

//_______________________________________________________________________________
//
//			Prototypes
//_______________________________________________________________________________


COMP add(COMP,COMP);
COMP sub(COMP*,COMP*);
COMP mult(COMP,COMP);
COMP conjugate(COMP);
float modulas(COMP);
void print(char* opr,COMP result,char* no);
void printmod(char*,float);

//________________________________________________________________________________
//
//			MAIN
//________________________________________________________________________________

int main(){

	//	
	//	code
	//
	
	COMP no1,no2,result;
	float mod;
	
	printf("Enter The Real And Imaginary part of first  complex number\n");
	scanf("%d %d",&no1.re,&no1.im);

	printf("Enter The Real And Imaginary part of second complex number\n");
	scanf("%d %d",&no2.re,&no2.im);

	//add
	result = add(no1,no2);
	print("Addition",result,'\0');
	
	//sub
	result = sub(&no1,&no2);
        print("Subtraction",result,'\0');

	//mult
	result = mult(no1,no2);
        print("Multiplication",result,'\0');
	
	//cojugate
	result = conjugate(no1);
        print("Conjugate",result,"no1");

	//modulas
	mod = modulas(no1);
        printmod("no1",mod);

	return 0;

	//
	//	End of code
	//
}

COMP add(COMP no1,COMP no2) {

	COMP result;
	
	result.re = no1.re+no2.re;
	result.im = no1.im+no2.im;

	return (result);
}

COMP sub(COMP* no1,COMP* no2) {

	COMP result;

        result.re = no1->re - no2->re;
        result.im = no1->im - no2->im;

        return (result);

}

COMP mult(COMP no1,COMP no2) {

        COMP result;

        result.re = no1.re*no2.re - no1.im*no2.im;
        result.im = no1.re+no2.im + no1.im*no2.re;

        return (result);

}

COMP conjugate(COMP no) {
	
	COMP result;

        result.re = no.re;
	result.im = -no.im;

        return (result);

}

float modulas(COMP no) {

	float result;

	result = pow((no.re*no.re+no.im*no.im),0.5);

	return(result);

}

void print(char* opr,COMP res,char* no) {

	if(strcmp(opr,"Conjugate")==0) {

		if(res.im<0) {

			printf("The Result of Conjugate of %s is %d%di\n",no,res.re,res.im);

		} else {

			printf("The Result of Conjugate of %s is %d+%di\n",no,res.re,res.im);

		}

	} else {
	
		if(res.im<0) {

			 printf("The Result of %s is %d%di\n",opr,res.re,res.im);

		} else {
		
			 printf("The Result of %s is %d+%di\n",opr,res.re,res.im);
		}
	}
}

void printmod(char* no,float result) {

	printf("THe Result of modulas of %s is %f\n",no,result);

}
