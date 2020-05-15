#include<stdio.h>

int main() {
	char i;
	int cnt = 0;

	for(i=0i<127;i++){
		cnt ++;
		printf("%d\n",cnt);
	}
	return 0;
}
