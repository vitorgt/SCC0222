#include <stdio.h>
#include <string.h>

int main(){

	char i[100000];

	int j = 0;

	scanf("%s", i);
	for(j = 0; j < strlen(i); j++){
		if(i[j] > 96 && i[j] < 123)
		i[j] = i[j] - 32;
	}
	printf("%s", i);
	return 0;

}