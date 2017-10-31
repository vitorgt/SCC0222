#include<stdio.h>

int main(){
	int n, max, min;
	scanf("%d", &n);
	int v[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	min = max = v[0];
	for(int i = 0; i < n; i++){
		if(v[i] >= max)
		max = v[i];
	}
	for(int i = 0; i < n; i++){
		if(v[i] <= min)
		min = v[i];
	}
	printf("max: %d\nmin: %d\n", max, min);
	return 0;
}