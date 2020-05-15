//passing a structure object to a function

#include<stdio.h>

struct Complex {
	int re;
	int img;
};	//in c 'complex' is pre-defined macro

struct Complex addcomplex(struct Complex,struct Complex);

int main() {
	struct Complex n1,n2,n3;

	printf("Enter 1st complex number\n");
	scanf("%d %d",&n1.re,&n1.img);

	printf("Enter Second complex number\n");
	scanf("%d %d",&n2.re,&n2.img);

	n3 = addcomplex(n1,n2);

	if(n3.img<0){
                printf("Addition : %d%di\n",n3.re,n3.img);
        }else{
                printf("Addition : %d+%di\n",n3.re,n3.img);
        }
	
	return(0);
}

struct Complex addcomplex(struct Complex n1,struct Complex n2) {
	
	struct Complex temp;
	
	temp.re = n1.re+n2.re;
	temp.img = n1.img+n2.img;

	return (temp);
}

