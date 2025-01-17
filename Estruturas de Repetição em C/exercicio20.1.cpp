/* 20.1- Use um loop para calcular a soma de todos os números inteiros de 1 a 10 e exiba o resultado */

#include <stdio.h>

int main() {
    
    int soma = 0;
    
    for(int i = 0; i < 11; i++){
        soma = soma + i;
    }
    
    printf("%d", soma);

    return 0;
}
