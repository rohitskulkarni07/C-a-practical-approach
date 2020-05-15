//passing indivisual member of a structure to a function

#include<stdio.h>

struct Complex {
	int re;
	int img;
};	//in c 'complex' is pre-defined macro

void addcomplex(int,int,int,int);
void multicomplex(int*,int*,int*,int*);

int main() {
	struct Complex n1,n2;

	printf("Enter 1st complex number\n");
	scanf("%d %d",&n1.re,&n1.img);

	printf("Enter Second complex number\n");
	scanf("%d %d",&n2.re,&n2.img);

	addcomplex(n1.re,n1.img,n2.re,n2.img);
	multicomplex(&n1.re,&n1.img,&n2.re,&n2.img);



	return(0);
}

void addcomplex(int a,int b,int c,int d){
	if((b+d)<0){
		printf("Addition : %d%di\n",a+c,b+d);
	}else{
		printf("Addition : %d+%di\n",a+c,b+d);
	}
}

void multicomplex(int* a,int* b,int* c,int* d){
	
	int re,img;

	re =  *a * *c-*b * *d;
	img = *a * *d+*b * *c;

	if(img<0){
                printf("Multiplication : %d%di\n",re,img);
        }else{
                printf("Multiplication : %d+%di\n",re,img);
        }



}

