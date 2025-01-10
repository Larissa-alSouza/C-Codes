// Estrurura de repetição do..while (faça...enquanto)
/* Utilizado quando você precisa de um loop onde não se tenha um número fixo de elementos, mas que tenha um critério de parada e a condição de parada é checada após a primeira execução
 
    Faça um programa, no qual receba e some números inteiros até
    número de entradda seja 0 e apresente a soma no final.*/
#include <stdio.h>

int main() {
    
    int num = 0, soma = 0;
    
    do{

        printf("Informe um número: ");
        scanf("%d", &num);
        
        soma = soma + num;
    }
    while(num != 0);
        
    printf("A soma é %d", soma);

    return 0;
}
