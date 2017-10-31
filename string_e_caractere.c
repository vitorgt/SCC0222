#include <stdio.h>
#include <string.h>

int carac(char *cha, char corr){
	int count = 0, i = 0;
	for(i = 0; i < strlen(cha); ++i){
		if(cha[i] == corr){
			++count;
		}
	}
	return count;
}

int main(){
	int c = 0;
	char in[100000], a;
	fgets(in, 1000000, stdin);
	scanf("%c", &a);
	c = carac(in, a);
	printf("%d\n", c);
	return 0;
}
