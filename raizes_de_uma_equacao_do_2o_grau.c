#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, d, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	d = (b * b) - 4 * a * c;
	if(d < 0){
		printf("NAO EXISTE RAIZ REAL");
	} else if(d == 0){
		x1 = ((-b) / (2 * a));
		printf("%.3f\n", x1);
	} else if(d > 0){
		x1 = ((-b + sqrt(d)) / (2 * a));
		x2 = ((-b - sqrt(d)) / (2 * a));
		if(x1<x2){
			printf("%.3f %.3f\n", x1, x2);
		} else{
			printf("%.3f %.3f\n", x2, x1);
		}
	}
	return 0;
}
