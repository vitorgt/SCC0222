#include<stdio.h>
#include<stdlib.h>

typedef struct _dia{
	char dia[3], mes[3], ano[5];
}Dia;

typedef struct _hora{
	char hor[3], min[3], seg[3];
}Hora;

typedef struct _agenda{
	Dia D;
	Hora H;
	char atv[10000];
}Ag;

int main(){
	int n = 0, i = 0;
	scanf("%d", &n);
	Ag *in = (Ag *)malloc(sizeof(Ag) * n);
	for(i = 0; i < n; i++){
		scanf("%s\n", in[i].D.dia);
		scanf("%s\n", in[i].D.mes);
		scanf("%s\n", in[i].D.ano);
		scanf("%s\n", in[i].H.hor);
		scanf("%s\n", in[i].H.min);
		scanf("%s\n", in[i].H.seg);
		//fgets(in[i].atv, 10000, stdin);
		scanf("%[^\n]s", in[i].atv);
	}
	for(i = 0; i < n; i++){
		printf("%s/%s/%s - %s:%s:%s\n%s\n",  in[i].D.dia, in[i].D.mes, in[i].D.ano, in[i].H.hor, in[i].H.min, in[i].H.seg, in[i].atv);
	}
	return 0;
}
