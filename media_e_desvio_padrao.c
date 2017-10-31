#include<stdio.h>
#include<math.h>

int main(){
	int n = 0, i = 0;
	scanf("%d", &n);
	double p[n], sum = 0, mus = 0;
	for(i = 0; i < n; i++){
		scanf("%lf", &p[i]);
	}
	for(i = 0; i < n; i++){
		sum = sum + p[i]/n;
	}
	printf("%.4lf\n", sum);
	for(i = 0; i < n; i++){
		mus = mus + (pow((p[i] - sum),2))/n;
	}
	printf("%.4lf\n", sqrt(mus));
	return 0;
}
