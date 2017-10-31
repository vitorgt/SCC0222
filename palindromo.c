#include<stdio.h>
#include<string.h>

char p[100000];

int main(){
	int i = 0, s = 0, w = 0;
	scanf("%s", p);
	s = strlen(p);
	for(i = 0; i <= (s/2); i++){
		if(p[i] == p[s-1]){
			w = 1;
		}
		else{
			w = 0;
			break;
		}
		s--;
	}
	if(w)
		printf("SIM\n");
	else
		printf("NAO\n");
	return 0;
}
