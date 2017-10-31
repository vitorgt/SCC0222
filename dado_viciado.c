#include<stdio.h>

int main(){
	int d, f[6] = {0}, m = 0, i = 0;
	while(scanf("%d", &d) != EOF)
		f[d-1]++;
	for(i = 0; i < 6; i++){
		if(f[i] > m)
			m = f[i];
	}
	for(i = 0; i < 6; i++){
		if(f[i] == m)
			printf("%d\n", i + 1);
	}
	printf("%d\n", m);
	return 0;
}
