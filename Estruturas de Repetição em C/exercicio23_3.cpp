/* 23.3- Leia um número inteiro n e calcule a soma de todos os números pares de 1 até n (pedindo para o usuário um número), usando while */

#include <stdio.h>

int main() {
    
    int num = 0, soma = 0, i = 1;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    while(i <= num){
        
        if(i % 2 == 0){
            soma = soma + i;
        }
        i++;
    }
    
    printf("A soma de todos os números pares de 1 a %d é: %d", num, soma);

}
