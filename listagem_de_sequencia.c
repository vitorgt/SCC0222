#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	double aa = *(double *)a, bb = *(double *)b;
	if(aa < bb) return -1;
	if(aa > bb) return 1;
	return 0;
}

int main(){
	int n = 0, i = 0, j = 0, *q;
	double *v, *r;
	scanf("%d", &n);
	v = (double *)malloc(sizeof(double)*n);
	r = (double *)malloc(sizeof(double)*n);
	q = (int *)calloc(sizeof(int), 10000);
	for(i = 0; i < n; i++){
		scanf("%lf", &v[i]);
		j = v[i]*10;
		q[j]++;
	}
	qsort(v, n, sizeof(double), compare);
	for(i = 0; i < n; i++){
		j = v[i]*10;
		if(v[i] != v[i-1]){
		printf("%.1lf %d\n", v[i], q[j]);
		}
	}
	free(v);
	free(r);
	free(q);
	return(0);
}