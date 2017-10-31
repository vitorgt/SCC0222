#include<stdio.h>
#include<stdlib.h>

int main(){
	float a, b, m;
	scanf("%f\n", &a);
	scanf("%f", &b);
	m = (2/((1/(a+1))+(1/(b+1))))-1;
	printf("%.2f\n", m);
	return 0;
}
