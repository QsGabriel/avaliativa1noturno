#include <stdio.h>

int main(){
    char senha[5];
    int caractere, senha2, checar2;
    char checar[5];

    scanf("%s", senha);
    senha[4] = '\0';
    
    do{ 
    scanf("%s", checar);
    checar[4] = '\0';

    senha2 = atoi(senha);
    checar2 = atoi(checar);

    if(senha2 == checar2){
        printf("senha valida!\n");
    } else{
        printf("senha invalida!\n");
    }
    } while(senha2 != checar2);
       
    return 0;
}
