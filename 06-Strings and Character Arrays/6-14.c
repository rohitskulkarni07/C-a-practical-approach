//  ______________________    ______________________
// | DEPRICATED FUNCTIONS |  |    Secure Funtion    |
// |	getch() (turbo c) |  |	getchar()	    |
// |	getc()		  |  |  --		    |
// |	getche()(turbo c) |  |  --		    |
// |	gets()            |  |  fgets()             | 
// |______________________|  |______________________|
//

#include<stdio.h>

int main(){

	char name[25],ch;
	int i=0;
	printf("Enter Name:\t");
	while((ch=getche())!='\n'){
		name[i] = ch;
		i++;
	}
	name[i] = '\0';
	printf("Name:\t%s",name);

	return (0);

}
