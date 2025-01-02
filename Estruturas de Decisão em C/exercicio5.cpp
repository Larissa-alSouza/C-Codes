/* 5- Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos*/

#include <stdio.h>

int main() {
    
    float numI = 0;
    float numII = 0;
    float numIII = 0;
    float resultado;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &numI);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &numII);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &numIII);
    
    resultado = (numI * numI) + (numII * numII) + (numIII * numIII);
    
    printf("O resultado da soma dos quadrados é: %f", resultado);

    return 0;
}
