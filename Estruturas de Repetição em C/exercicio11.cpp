/* 11- Crie um programa que peça ao usuário para digitar números positivos e encerre ao receber um número negativo */

#include <stdio.h>

int main() {
    
    int num = 0, soma = 0;
    
    while(1){
        printf("Digite um número: ");
        scanf("%d", &num);
        
        
        
        if(num < 0){
            break;
        }
        soma = soma + num;
    }
    printf("%d \n", soma);
    
    return 0;
}
