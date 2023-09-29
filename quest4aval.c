#include <stdio.h>

int main(){
    char tipo;
    int salario;
    int salario2;
    
    scanf("%c", &tipo);
    scanf("%d", &salario);

    if(tipo == 'a'){
        salario2 = salario * 1.05;
        printf("R$ %d.00", salario2);
    } else if(tipo == 'b'){
        salario2 = salario * 1.07;
        printf("R$ %d.00", salario2);
    } else if(tipo == 'c'){
        salario2 = salario * 1.08;
        printf("R$ %d.00", salario2);
    }

    return 0;
}
