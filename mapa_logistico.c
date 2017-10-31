#include<stdio.h>

#include<stdlib.h>



int main(){
	int k = 0, i = 0;

	double a = 0, b = 0, r = 0;

	scanf("%lf %lf %d", &a, &r, &k);

	for(i = 0; i < k; i++){

		b = r * a * (1 - a);

		printf("%d %lf\n", i + 1, b);

		a = b;

	}

	return 0;

}