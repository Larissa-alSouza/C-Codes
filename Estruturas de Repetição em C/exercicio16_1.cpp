/* 16.1- Repetir a entrada de um número até que o usuário digite um valor maior que 10 usando do while */

#include <stdio.h>

//Exemplo 1
int main() {
    
    int num = 0;
    
    do{
        printf("Digite um número: ");
        scanf("%d", &num);
        
    } while(num < 10);

    return 0;
}
