#include <stdio.h>

int main(){
    char entrada[10];
    int character;
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        character = getchar();
        if(character == '\n' ){
            break;
        }
        entrada[i] = character;
        sum += (character - '0'); 
    }

    int numero = atoi(entrada);

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
        printf("A soma dos algarismos de %d eh %d", numero, sum);
    } else{
        printf("%d eh ímpar\n", numero);
        printf("A soma dos algarismos de %d eh %d", numero, sum);
    }

    return 0;
}