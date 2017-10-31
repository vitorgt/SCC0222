#include<stdio.h>

int main(){
	double a, b;
	char o;
	scanf("%lf %c %lf", &a, &o, &b);
	switch (o){
		case '+':
			printf("%.2lf\n", a + b);
		break;
		case '-':
                        printf("%.2lf\n", a - b);
		break;
		case '*':
                        printf("%.2lf\n", a * b);
		break;
		case '/':
                        printf("%.2lf\n", a / b);
		break;
	}
	return 0;
}
