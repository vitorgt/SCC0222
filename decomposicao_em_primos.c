#include<stdio.h>
#include<math.h>

int main(){
	long long n = 0;
	scanf("%lld", &n);
	int i = 0, j = 0, k = 0, p = 0, c = 0;
	double r = sqrt(n);
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
			if(n % i == 0){
				printf("%d ", i);
				while(n % i == 0){
					c++;
					n = (n / i);
				}
				printf("%d\n", c);
			}
			k++;
			c = 0;
		}
	}
	return 0;
}
