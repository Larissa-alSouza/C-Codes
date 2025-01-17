/* 22.1- Peça ao usuário para inserir um número inteiro positivo e calcule o seu fatorial usando um loop while */

#include <stdio.h>

int main() {
    
    int num = 0, fatorial = 1;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    while(num){
        fatorial = fatorial * num;
        num--;
        
        if(num == 0){
            printf("%d", fatorial);
            break;
        }
    }
    
    return 0;
}
