#include<stdio.h>

int main(){
	char name[50];
	scanf("%s", name);
	FILE *arq = fopen(name, "r");
	fseek(arq, 0, SEEK_END);
	printf("%ld", ftell(arq));
	return 0;
}
