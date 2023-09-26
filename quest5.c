#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    
    if(a == b){
        printf("Os valores lidos sao iguais.\n");
    } else if(a > b){
        printf("%d 3 maior que %d. ", a, b);
        if(a % b == 0){
            printf("%d eh multiplo de %d.\n", a, b);
        } else{
            printf("%d nao eh multiplo de %d.\n", a, b);
        }
    } else if(a < b){
        printf("%d eh maior que %d. ", b, a);
        if(b % a == 0){
            printf("%d eh multiplo de %d.\n", b, a);
        } else{
            printf("%d nao eh multiplo de %d.\n", b, a);
        }
    }

    return 0;
    }