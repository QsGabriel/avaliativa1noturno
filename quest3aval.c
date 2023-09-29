#include <stdio.h>

int main() {
    int senhaCadastrada, senhaDigitada;

    printf("Digite a senha inicial (4 dígitos): ");
    scanf("%d", &senhaCadastrada);

    printf("Senha cadastrada: %d\n", senhaCadastrada); 

    do {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCadastrada) {
            printf("Senha valida!\n");
            break;
        } else {
            printf("Senha invalida!\n");
        }
    } while (1);

    return 0;
}
