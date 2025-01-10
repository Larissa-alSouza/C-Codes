// Estrurura de repetição while (enquanto)
/* Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos, mas que tenha um critério de parada e antes de iniciar o loop a condição é checada
 
    Faça um programa, no qual receba e some números inteiros até que o número de entradda seja 0 e apresente a soma no final.*/
#include <stdio.h>

int main() {
    
    int num = 0, soma = 0;
     
        printf("Informe um número: ");
        scanf("%d", &num);
        
        while(num != 0) {
            soma = soma + num;
            
            printf("Informe um número: ");
            scanf("%d", &num);
        }
        
    printf("A soma é %d", soma);
    
    return 0;
}
