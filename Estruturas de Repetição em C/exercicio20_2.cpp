/* 20.2- Use um loop para calcular a soma de todos os números inteiros de 1 a 10 e exiba o resultado */

#include <stdio.h>

int main() {
    
    int num = 0, soma = 0;
    
    while(num < 11){
        soma = soma + num;
        num++;
    }
    
    printf("%d", soma);

    return 0;
}
