#include<stdio.h>
#include<stdlib.h>

typedef struct _olimpiada{
	char pais[4];
	int our, pra, bro, tot;
}Ol;

int main(){
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	Ol *in = (Ol *)malloc(sizeof(Ol) * n);
	for(i = 0; i < n; i++){
		scanf("%s ", in[i].pais);
		scanf("%d ", &in[i].our);
		scanf("%d ", &in[i].pra);
		scanf("%d ", &in[i].bro);
		in[i].tot = in[i].our*10000 + in[i].pra*100 + in[i].bro;
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(in[i].tot < in[j].tot){
				Ol aux = in[i];
				in[i] = in[j];
				in[j] = aux;	
			}
		}
	}
	for(i = 0; i < n; i++){
		printf("%s %d %d %d\n",  in[i].pais, in[i].our, in[i].pra, in[i].bro);
	}
	free(in);
	return 0;
}
