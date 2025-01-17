/* 23.1- Leia um número inteiro n e calcule a soma de todos os números pares de 1 até n */

#include <stdio.h>

int main() {
    
    int num = 50, soma = 0;
    
    for(int i = 1; i <= 50; i++){
        
        if(i % 2 == 0){
            soma = soma + i;
        }
    }
    
    printf("A soma de todos os números pares de 1 a 50 é: %d", soma);

}
