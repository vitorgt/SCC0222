#include<stdio.h>

int main(){
	int n = 0, i = 0;
	scanf("%d", &n);
	double p[n], sum = 0;
	for(i = 0; i < n; i++){
		scanf("%lf", &p[i]);
	}
	for(i = 0; i < n; i++){
		sum = sum + (1 / (p[i] + 1));
	}
	printf("%.2lf", (n / sum) - 1);
	return 0;
}
