#include <stdio.h>
#include <math.h>

double distance(double a, double b){
	double dist = 0;
	dist = pow((a - b),2);
	return dist;
}

int main(){
	int n = 0, i = 0;
	double sum = 0, in[100][2];
	scanf("%d", &n);
	for(i = 0; i < n; ++i){
		scanf("%lf %lf", &in[i][0], &in[i][1]);
	}
	for(i = 0; i < n-1; ++i){
		sum = sum + sqrt(distance(in[i][0], in[i+1][0]) + distance(in[i][1], in[i+1][1]));
	}
	printf("%.4lf\n", sum);
	return 0;
}
