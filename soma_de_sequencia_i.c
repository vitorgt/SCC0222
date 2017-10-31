#include<stdio.h>

int main() {

	float n = 0, i = 0, sum = 0;

	scanf("%f", &n);

	for(i = 0; i < n; i++){

		sum = sum + i/(n - i + 1);

	}

	sum += n;
	printf("%.4f", sum);

	return 0;

}