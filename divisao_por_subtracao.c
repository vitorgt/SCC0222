#include<stdio.h>

int main(){
	int nu, de, count, left;
	count = left = 0;
	scanf("%d%d", &nu, &de);
	while(nu >= de){
		left = nu - de;
		nu = nu - de;
		count++;
	}
	printf("%d\n%d\n", count, left);
	return 0;
}
