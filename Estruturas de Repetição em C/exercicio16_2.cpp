/* 16.2- Repetir a entrada de um número até que o usuário digite um valor maior que 10 usando do while */

#include <stdio.h>

//Exemplo 2
int main() {
    
    int num = 0;
    
    do{
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if(num >= 10){
            break;
        }
    } while(1);

    return 0;
}
