#include<stdio.h>
#include<string.h>

int main(){
    int n = 0, lth = 200;
    scanf("%d", &n);
    char in[n][lth], aux[n*lth];
    int i = 0, j = 0;
    for (i = 0; i < n; i++){
        scanf("%s", in[i]);
    }
    for (i = 1; i < n; i++){
        for (j = 1; j < n; j++){
            if (strcmp(in[j - 1], in[j]) > 0){
                strcpy(aux, in[j - 1]);
                strcpy(in[j - 1], in[j]);
                strcpy(in[j], aux);
            }
        }
    }
    for (i = 0; i < n; i++){
        printf("%s\n", in[i]);
    }
    return 0;
}