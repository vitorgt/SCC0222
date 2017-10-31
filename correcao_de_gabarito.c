#include <stdio.h>
#include <string.h>

int main(){
	int q = 0, a = 0, i = 0, l = 1;
	double c = 0;
	scanf("%d %d", &q, &a);
	char ga[q+1], en[q+1];
	scanf("%s", ga);
	for(l = 1; l <= a; l++){
		scanf("%s", en);
		for(i = 0; i < q; i++){
			if(en[i] == ga[i]){
			c++;	
			}
		}
		printf("%.2lf\n", (c/q)*10);
		c = 0;
	}
	return 0;
}
