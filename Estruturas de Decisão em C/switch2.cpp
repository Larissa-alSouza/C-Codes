#include <stdio.h>

/*
Usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if else

-Pseudocódigo
Escolha(variável)
início
    caso valor1:
        instruções;
    caso valor2;
        instruções;
    ...
    caso valorN;
        instuções;
fim

Na linguagem C
Switch(variável){
    case valor1:
        instrucoes;
        break;
    case valor2:
        instrucoes;
        break;
    default:
        instrucoes;
}
*/

int main() {
    
    int num = 0;
    
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &num);
    
    switch(num){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Este numero e invalido");
    }

    return 0;
}
