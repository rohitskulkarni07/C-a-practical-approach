#include<stdio.h>

int main() {
	
	switch(1) {

		int case1,case4a,case4b,case5a,case5b,case5c,case5d;

		float case6a;
		double case6b;


		case 1:
			case1 = 2*3+4%5-3/2+6;  //  (2*3) + (4%5) - (3/2) + 6
			printf("%d \n",case1);
		case 2:
			printf("%d %d %d %d\n",6/5,-6/5,6/-5,-6/-5);
		case 3:
			printf("%d %d %d %d\n",6%5,-6%5,6%-5,-6%-5);
		case 4:
			case4a = 12;
			printf("%d %d\n",case4b,case4b=case4a); //order of evaluation in function  call is right to left
		/*case 5:
			case5a = 23;
			case5b = 12;
			case5c = 10;

			case5d = case5c+2=case5b+1=case5a;
			printf("%d %d %d %d\n"case5a,case5b,cas5c,case5d);
			*/
		case 6:
			case6a = 0.5f;
			case6b = 0.9f;

			printf("0.4f= %.20f \n",case6a);
			printf("0.9f= %.20f \n",case6b);

			case6a = 0.4;
	                case6b = 0.9;

			printf("0.4 = %.20f \n",case6a);
	                printf("0.9 = %.20f \n",case6b);
	
		case 7:
			case6a = 0.9;
			case1 = case6a < 0.9;
			printf("Answer of a<0.9 is %d\n",case1);
		case 8:
			case6a = 0.9f;
                        case1 = case6a < 0.9f;
                        printf("Answer of a<0.9 is %d\n",case1);


	}


	return (0);

}
