#include <stdio.h>
#include <string.h>

int main(){
	int i = 0, b = 0;
	char in[20000];
	fgets(in, 20000, stdin);
	for(i = strlen(in); i > 0; --i){
		if(in[i] > 64 && in[i] < 91){
			b = i;
			break;
		}
		if(in[i] > 96 && in[i] < 123){
			in[i] = in[i] - 32;
		}
	}
	for(i = b; i < strlen(in) - 1; ++i){
		printf("%c", in[i]);
	}
	printf(", ");
	for(i = 0; i < b - 1; ++i){
		printf("%c", in[i]);
	}
	printf("\n");
	return 0;
}
