// Estruturas de repetição for, while e do while

/* Utilizando o For (para), faça um programa, no qual receba e some 5 números inteiros e apresente a soma no final. */

#include <stdio.h>

int main() {
    
     int num = 0, soma = 0;
     
    /* (Para int i iniciando em 0; enquanto i for menor que 5; incrementa o i em 1)
       (inicialização; critério de parada;incremento)*/
    for(int i = 0; i < 5; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &num);
        
        soma = soma + num;
    }
    
    printf("A soma é %d", soma);
    
    return 0;
}
