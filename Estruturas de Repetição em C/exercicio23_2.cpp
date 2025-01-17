/* 23.2- Leia um número inteiro n e calcule a soma de todos os números pares de 1 até n (pedindo para o usuário um número) */

#include <stdio.h>

int main() {
    
    int num = 0, soma = 0;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        
        if(i % 2 == 0){
            soma = soma + i;
        }
    }
    
    printf("A soma de todos os números pares de 1 a %d é: %d", num, soma);
    
}
