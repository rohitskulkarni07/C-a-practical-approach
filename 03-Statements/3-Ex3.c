//root of quadratic equation

#include<stdio.h>
#include<math.h>


int main() {
	
	int a,b,c,d;
	float r1,r2;

	printf("Enter 3 coefficient to find roots\n");

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	d= b*b-4*a*c;
	
	//b^2-4ac > 0 then roots are real and un-equal.
	if(d>0) {

		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);

		printf("Roots are Real and Un-Equal\n");
		printf("x = %f\n",r1);
		printf("y = %f\n",r2);
	}

	//b^2-4ac = 0 then roots are real and equal.
	else if(d==0){

		r1 = -b/(2*a);

		printf("Roots are Real and Equal\n");
		printf("x = %f\ny = %f\n",r1,r1);

	}

	//b^2-4ac < 0 then roots are imaginary
	else {
		
		r1 = (-b/(2*a))+(sqrt(d/(2*a)));
		r2 = (-b/(2*a))-(sqrt(d/(2*a)));

                printf("Roots are Imaginary\n");
                printf("x = %f i\n",r1);
                printf("y = %f i\n",r2);

	}

	return (0);
}
/*
 rohit@rohit-Vostro-1540:~/C$ gcc 3-Ex3.c -lm
rohit@rohit-Vostro-1540:~/C$ ./a.out 
Enter 3 coefficient to find roots
1
2
3
Roots are Imaginary
x = -nan i
y = -nan i
rohit@rohit-Vostro-1540:~/C$ ./a.out 
Enter 3 coefficient to find roots
1
4
4
Roots are Real and Equal
x = -2.000000
y = -2.000000
rohit@rohit-Vostro-1540:~/C$ ./a.out 
Enter 3 coefficient to find roots
1
4
4
Roots are Real and Equal
x = -2.000000
y = -2.000000
rohit@rohit-Vostro-1540:~/C$ ./a.out 
Enter 3 coefficient to find roots
1
4
3
Roots are Real and Un-Equal
x = -1.000000
y = -3.000000

*/
