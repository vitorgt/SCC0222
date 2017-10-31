#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *texto = NULL, c;
	int cont = 0, incr = 1, i = 0;
	while ((c = getchar()) != '\n'){
		texto = (char *)realloc(texto, sizeof(char)* (incr++));
		texto[cont++] = c;
	}
	texto[cont] = '\0';
	for(i = 0; i < cont; i++){
		printf("%c\n", texto[i]);
	}
	free(texto);
	return 0;
}
