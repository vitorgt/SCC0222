#include<stdio.h>

int main(){
	char name[50], c;
	int count = 0;
	scanf("%s", name);
	FILE *arq = fopen(name, "r");
	while(fscanf(arq, "%c", &c) != EOF)
		count++;
	printf("%d", count);
	return 0;
}
