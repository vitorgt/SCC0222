#include<stdio.h>

int main(){
	double a, b, c, d, min;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	if(a<=b && a<=c && a<=d){
		min = a;}
		else if(b<a  && b<c && b<d){
			min = b;}
			else if(c<a  && c<b && c<d){
				min = c;}
				else if(d<a  && d<b && d<c){
					min = d;}
	printf("%.4lf\n", (a + b + c + d - min) / 3 );
	return 0;
}
