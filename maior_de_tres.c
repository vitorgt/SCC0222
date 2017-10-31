#include<stdio.h>

int main (){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (c >= b && c >= a){
		printf("%d\n", c);
	}
	if (b > a && b > c){
		printf("%d\n", b);
	}
	if (a > b && a > c){
		printf("%d\n", a);
	}
	return 0;
}
