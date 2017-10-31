#include<stdio.h>
#include<math.h>

int main(){
	int i = 0, m[31], b = 0;
	for(i = 0; i < 31; i++){
		scanf("%d", &m[i]);
	}
	for(i = 0; i < 31; i++){
		if(m[i] > b){
			b = m[i];
		}
	}
	printf("%d\n", b);
	for(i = 0; i < 31; i++){
		if(m[i] == b){
			printf("%d\n", i + 1);
		}
	}
	return 0;
}
