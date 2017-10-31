#include<stdio.h>
#include<stdlib.h>

int readInt(){
	int n;
	scanf("%d", &n);
	return n;
}

double readDouble(){
	double n;
	scanf("%lf", &n);
	return n;
}

void printDouble(double val){
	printf("%.2lf", val);
}

int main(){
	int n = readInt(), i = 0;
	double *h, sum = 0, end = 0;
	h = (double *)malloc(sizeof(double)*n);
	for(i = 0; i < n; i++){
		h[i] = readDouble();
	}
	for(i = 0; i < n; i++){
		sum = sum + (1 / (h[i] + 1));
	}
	end = (n / sum) - 1;
	printDouble(end);
	free(h);
	return 0;
}