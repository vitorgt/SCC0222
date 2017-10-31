#include<stdio.h>
#include<math.h>

int main(){
	double s, i, f, fac, sump = 0, sumn = 0, sum = 0, inte;
	scanf("%lf", &s);
	i = 1;
	for(inte = 1; inte <= 150; inte++){
		fac = 1;
		for(f = 1; f <= i ; f++){
			fac = fac*f;
		}
		sump = sump + pow(s,i)/fac;
		i = i + 4;
	}
	i = 3;
	for(inte = 1; inte <= 150; inte++){
		fac = 1;
		for(f = 1; f <= i ; f++){
			fac = fac*f;
		}
		sumn = sumn - pow(s,i)/fac;
		i = i + 4;
	}
	printf("%.6lf", sum = sump + sumn);
	return 0;
}