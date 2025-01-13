/* 10- Escreva um programa que peça ao usuário para adivinhar um número secreto (predefinido no código) */

#include <stdio.h>

int main() {
    
    int num = 17;
    int valor = 0;
    
    while(1){
        printf("Digite um número: ");
        scanf("%d", &valor);
        
        if(valor == num){
            printf("Parabéns, Você acertou!");
            break;
        }
        else {
            printf("Número errado, tente novamente. \n");
        }
    }

    return 0;
}
