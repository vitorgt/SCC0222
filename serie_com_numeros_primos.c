#include<stdio.h>
#include<math.h>

int main(){
	long long n = 0;
	scanf("%lld", &n);
	int i = 0, j = 0, k = 0, p = 0;
	double sum = 0, r = sqrt(n);
	for(i = 2; i <= n; i++){
		p = 1;
		for(j = 2; j <= r; j++){
			if(i != j && i%j == 0){
				p = 0;
				if(!p){
					break;
				}
			}
		}
		if(p){
			sum = sum + (double)pow(-1,k)/i;
			k++;
		}
	}
	printf("%.7lf\n", sum);
	return 0;
}
