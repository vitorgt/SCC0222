#include <stdio.h>
#include <math.h>

int main(){
	double cap, mes, tax, p, l, c;
	scanf("%lf%lf", &cap, &mes);
	
	if(mes <= 6)
		tax = 0.225;
	else if(mes >= 7 && mes <= 12)
		tax = 0.2;
	else if(mes >= 13 && mes <= 24)
		tax = 0.175;
	else if(mes >= 24)
		tax = 0.15;
	
	p = cap * pow(1.0059,mes);
	l = cap * pow(1.0086,mes);
	c = cap + ((cap*pow(1.01032,mes))-cap) - ((cap*pow(1.01032,mes))-cap)*tax;
	
	if(mes < 6)
		l = cap;
	
	printf("%.2lf\n%.2lf\n%.2lf\n", p, l, c);
	
	if(mes >= 6 && mes <=12)
		printf("L\n");
	else printf("C\n");
	return 0;
}