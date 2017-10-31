#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[]){
	char n1[1000000];
	char n2[1000000];
	int i = 0;
	fgets(n1, sizeof(n1), stdin);
	fgets(n2, sizeof(n2), stdin);
	n1[strlen(n1)-1] = '\0';
	n2[strlen(n2)-1] = '\0';
	int t1 = strlen(n1), t2 = strlen(n2);
	if(t1 >= t2){
		printf("%d %d ", atoi(n2), atoi(n1));
		for(i = 0; i <= t1-t2; i++){
			int k = i, j = 0;
			while (n1[k] == n2[j] && j < t2){
				k++;
				j++;
			}
			if (j == t2){
				printf("SIM\n");
				return 0;
			}

		}
	}
	else{
		printf("%d %d ", atoi(n1), atoi(n2));
		for(i = 0; i <= t2-t1; i++){
			int k = i, j = 0;
			while (n2[k] == n1[j] && j < t1){
				k++;
				j++;
			}
			if (j == t1){
				printf("SIM\n");
				return 0;
			}

		}
	}
	printf("NAO\n");
	return 0;
}
