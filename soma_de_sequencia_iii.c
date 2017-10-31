#include<stdio.h>

int main() {
	float n = 0, i = 1, subt = 0, sum = 0, inte = 0;
	scanf("%f", &n);
	for(inte = 1; inte <= n; inte++){
		if(inte == 1){
			sum = sum + 1/n;
		} else {
			sum = sum + i/(n - subt);
		}
	subt = subt + 1;
	i = i + 2;
	}
	printf("%.4f", sum);
	return 0;
}