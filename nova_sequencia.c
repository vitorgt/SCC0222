#include<stdio.h>
#include<math.h>

int t[100000];

int main(){
	int i = 0, j = 0;
	double m = 0, v1, v2, v3, v4;
	do{
		scanf("%d", &t[i + 1]);
		m = m + t[i + 1];
		i++;
	}
	while(t[i] != 0);
	i--;
	m = m / i;
	for(j = 2; j <= (i - 1); j++){
		v1 = pow(t[j], 2.0);
		v2 = (t[j-1] + t[j] + t[j+1])/3.0;
		v3 = m * v2;
		v4 = v1 / v3;
		printf("%.4lf\n", v4);
	}
	return 0;
}
