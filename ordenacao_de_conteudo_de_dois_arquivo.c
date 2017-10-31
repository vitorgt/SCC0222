#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _agenda{
	char cpf[16], nome[150], age[6];
}Ag;

int main(){
	int i = 0, j = 0, total = 0;
	Ag p[10000];
	char arq1[20], arq2[20];
	scanf("%s\n%s", arq1, arq2);
	FILE *ar1 = fopen(arq1, "r");
	FILE *ar2 = fopen(arq2, "r");
	for(total = 0; !feof(ar1); total++){
		fgets(p[total].cpf, 16, ar1);
		fgets(p[total].nome, 100, ar1);
		fgets(p[total].age, 6, ar1);
	}
	for(; !feof(ar2); total++){
		fgets(p[total].cpf, 16, ar2);
		fgets(p[total].nome, 100, ar2);
		fgets(p[total].age, 6, ar2);
	}
	for(i = 0; i < total; i++){
		for(j = i + 1; j < total; j++){
			if(strcmp(p[i].cpf, p[j].cpf) > 0){
				Ag aux = p[i];
				p[i] = p[j];
				p[j] = aux;	
			}
		}
	}
	for(j = 0; j < total; j++){
		printf("%s%s%s", p[j].cpf, p[j].nome, p[j].age);
	}
	return 0;
}