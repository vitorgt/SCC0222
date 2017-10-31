#include<stdio.h>
#include<stdlib.h>

void allocM(int ***matrix, int n){
	int i = 0;
	*matrix = (int **)malloc(sizeof(int *) * n);
	for(i = 0; i < n; i++){
		*(*matrix + i) = (int *)malloc(sizeof(int) * n);
	}
}

void deallocM(int **matrix, int n){
	int i = 0;
	for(i = 0; i < n; i++){
		free(matrix[i]);
	}
	free(matrix);
}

int main(){
	int **m = NULL, n = 0, i = 0, j = 0, dP = 0, dA = 0, *l = NULL, *c = NULL, compare = 0;
	scanf("%d", &n);
	allocM(&m, n);
	l = (int *)calloc(sizeof(int), n);
	c = (int *)calloc(sizeof(int), n);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &m[i][j]);
			l[i] += m[i][j];
			c[j] += m[i][j];
			if(i == j){
				dP += m[i][i];
			}
			if(i + j == n - 1){
				dA += m[i][j];
			}
		}
	}
	compare = dP;
	if(dA != compare){
		printf("NAO");
		return 0;
	}
	for(i = 0; i < n; i++){
		if(l[i] != compare){
			printf("NAO");
			return 0;
		}
		if(c[i] != compare){
			printf("NAO");
			return 0;
		}
	}
	printf("SIM");
	deallocM(m, n);
	free(l);
	free(c);
	return 0;
}