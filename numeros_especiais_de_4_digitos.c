#include <stdio.h>

int main(){
	int i = 0;
	for(i = 32; i < 100; i++){
		if( ( ( (i*i)/100 ) + ( (i*i)%100 ) ) == i){
			printf("%d\n", i*i);
		}
	}
	return 0;
}