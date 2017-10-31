#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int p[n];
    for(i = 0; i <= n; i++){
        p[i] = 1;
    }
    for(i = 0; i <= n; i++){
        if(i!=2 && i!=3 && i!=5 && i!=7 && i!=11 && i!=13 && i!=17 && i!=19 && i!=23 && i!=29 && i!=31 && i!=37){
            if(i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%11==0 || i%13==0 || i%17==0 || i%19==0 || i%23==0 || i%29==0 || i%31==0 || i%37==0 || i==0 || i==1){
                p[i] = 0;
            }
        }
    }
    for(i = 0; i <= n; i++){
        if(p[i]){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}