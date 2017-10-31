#include <stdio.h>
#include <stdlib.h>

void readmatrix(int **matrix, int l, int c){
	int i = 0, j = 0;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}

int **mallocmatrix(int l, int c){
	int **aux, i = 0;
	aux = (int **)malloc(sizeof(int *) * l);
	for(i = 0; i < l; i++){
		aux[i] = (int *)malloc(sizeof(int) * c);
	}
	return aux;
}

int main(){
	int c1 = 0, l1 = 0, c2 = 0, l2 = 0, **r, **m1, **m2, i = 0, j = 0, k = 0;
	scanf("%d%d", &l1, &c1);
	m1 = mallocmatrix(l1, c1);
	readmatrix(m1, l1, c1);
	scanf("%d%d", &l2, &c2);
	if(c1 != l2){
		return 0;
	}
	m2 = mallocmatrix(l2, c2);
	readmatrix(m2, l2, c2);
	r = mallocmatrix(l1, c2);
	for(i = 0; i < l1; i++){
		for(j = 0; j < c2; j++){
			r[i][j] = 0;
			for(k = 0; k < c1; k++){
				r[i][j] = r[i][j] + (m1[i][k] * m2[k][j]);
			}
		}
	}
	for(i = 0; i < l1; i++){
		for(j = 0; j < c2; j++){
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	return 0;
}
