#include <stdio.h>
#include <string.h>

int main(){
	int i = 0, cD = 0, cC = 0;
	char en[100000];
	fgets(en, 100000, stdin);
	for(i = 0; i < strlen(en); i++){
		if(en[i] > 47 && en[i] < 58){
			cD++;
		}	
		if((en[i] > 64 && en[i] < 91) || (en[i] > 96 && en[i] < 123)){
			cC++;
		}	
	}
	printf("%d\n%d\n", cC, cD);
	return 0;
}
