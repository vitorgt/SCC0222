#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *texto = NULL, a[5], c;
	int n = 0, i = 1, j = 0, s = 0;
	while((c = getchar()) != 'x'){
		if(c != '\n'){
			texto = (char *)realloc(texto, sizeof(char)*(i++));
			texto[n++] = c;
		}
	}
	texto = (char *)realloc(texto, sizeof(char)*(i++));
	texto[n++] = 'x';
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(texto[i] > texto[j]){
				c = texto[i];
				texto[i] = texto[j];
				texto[j] = c;
			}
		}
	}
	j = n;
	for(i = 0; i < j; i += 4){
		a[0] = texto[i];
		a[1] = texto[i+1];
		a[2] = texto[i+2];
		a[3] = texto[i+3];
		memcpy(&s, a, 5);
		printf("%d\n", s);
	}
	free(texto);
	return 0;
}