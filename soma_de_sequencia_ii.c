#include<stdio.h>
#include<math.h>

int main() {
	float n = 0, i = 0, sum = 0;
	scanf("%f", &n);
	for(i = 1; i <= n; i++){
		sum = sum + pow(-1,i + 1) * (1/i);
	}
	printf("%.4f", sum);
	return 0;
}