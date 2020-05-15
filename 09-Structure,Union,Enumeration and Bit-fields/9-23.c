//passing a structure object as a address or a referance to a function

#include<stdio.h>

struct Complex {
	int re;
	int img;
};

struct Complex multicomplex(struct Complex*,struct Complex*);

int main() {
	struct Complex n1,n2,n3;

	printf("Enter 1st complex number\n");
	scanf("%d %d",&n1.re,&n1.img);

	printf("Enter Second complex number\n");
	scanf("%d %d",&n2.re,&n2.img);

	n3 = multicomplex(&n1,&n2);

	if(n3.img<0){
                printf("Addition : %d%di\n",n3.re,n3.img);
        }else{
                printf("Addition : %d+%di\n",n3.re,n3.img);
        }
	
	return(0);
}

struct Complex multicomplex(struct Complex *n1,struct Complex *n2) {
	
	struct Complex temp;
	
	temp.re  = n1->re * n2->re - n1->img * n2->img;
	temp.img = n1->re * n2->img+ n1->img * n1->re;

	return (temp);
}

