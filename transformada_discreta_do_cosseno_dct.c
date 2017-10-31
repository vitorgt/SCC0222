#include<stdio.h>
#include<math.h>

#define M_PI 3.14159265358979323846

double m[100000];

int main(){
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	double r = 0;
	for(i = 0; i < n; i++){
		scanf("%lf", &m[i]);
	}
	for(i = 0; i <= (n - 1); i++){
		r = 0;
		for(j = 0; j <= (n - 1); j++){
			r = r + ( m[j] * cos((M_PI/n) * (j + 0.5) * i) );
		}
		printf("%lf\n", r);
	}
	return 0;
}
